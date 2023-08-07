
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#ifdef DEBUG
#define LOG(...) fprintf(stderr, __VA_ARGS__)
#else
#define LOG(...)
#endif

// Total payload size is 1024 bytes max
#define STACK_SIZE 100

typedef struct ScannerStack {
  int stack[STACK_SIZE];
  int top;
  int last_indentation_size;
  int last_newline_count;
  int last_column;
} ScannerStack;

ScannerStack* createStack() {
  ScannerStack* ptr = (ScannerStack*) malloc(sizeof(ScannerStack));

  ptr -> top = 0;
  ptr -> last_indentation_size = -1;
  ptr -> last_newline_count = 0;
  ptr -> last_column = -1;
  memset(ptr -> stack, STACK_SIZE, (0));

  return ptr;
}

bool isEmptyStack(ScannerStack *stack) { return stack->top == 0; }

int peekStack(ScannerStack *stack) {
  return isEmptyStack(stack) ? -1 : stack->stack[stack->top - 1];
}

void pushStack(ScannerStack *stack, unsigned int value) {
  stack->top++;
  stack->stack[stack->top - 1] = value;
}

int popStack(ScannerStack *stack) {
  if (isEmptyStack(stack))
    return -1;
  else {
    int result = peekStack(stack);
    stack->top--;

    return result;
  }
}

void printStack(ScannerStack *stack, char *msg) {
  LOG("%s Stack[top = %d; ", msg, stack->top);
  for (int i = 0; i < stack->top; i++) {
    LOG("%d | ", stack->stack[i]);
  }
  LOG("]\n");
}

unsigned serialiseStack(ScannerStack *stack, char *buf) {
  int elements = isEmptyStack(stack) ? 0 : stack->top;
  if (elements < 0) {
    elements = 0;
  }
  unsigned result_length = (elements + 3) * sizeof(int);
  int *placement = (int *)buf;
  memcpy(placement, stack->stack, elements * sizeof(int));
  placement[elements] = stack->last_indentation_size;
  placement[elements + 1] = stack->last_newline_count;
  placement[elements + 2] = stack->last_column;

  return result_length;
}

void deserialiseStack(ScannerStack* stack, const char* buf, unsigned n) {
  if (n != 0) {
    int *intBuf = (int *)buf;

    unsigned elements = n / sizeof(int) - 3;
    stack->top = elements;
    memcpy(stack->stack, intBuf, elements * sizeof(int));
    stack->last_indentation_size = intBuf[elements];
    stack->last_newline_count = intBuf[elements + 1];
    stack->last_column = intBuf[elements + 2];
  }
}

void resetStack(ScannerStack *p) {
  p->top = 0;
  p->last_indentation_size = -1;
  p->last_newline_count = 0;
  p->last_column = -1;
}
