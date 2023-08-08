(keyw) @keyword
; various keywords

(primary (symbol) @variable)
; variables - overzealous, so placed first

[
  (comment)
  (multilineComment)
] @comment
; line and block comments

[
  (docComment)
  (multilineDocComment)
] @comment.documentation
; comments documenting code

(ERROR) @error
; syntax/parser errors

(pragma) @preproc
; various preprocessor directives & shebangs

; TODO: maybe put pragma definitions or macro definitions here
;@define                ; preprocessor definition directives

(declaration (variable (declColonEquals "=" @operator)))
(exprStmt "=" @operator)
[
  (operator)
  (opr)
] @operator
; symbolic operators (e.g. `+` / `*`)

[
  "."
  ","
  ";"
  ":"
] @punctuation.delimiter
; delimiters (e.g. `;` / `.` / `,`)

(tupleConstr ["(" ")"] @punctuation.bracket   )
(arrayConstr ["[" "]"] @punctuation.bracket   )
(tableConstr ["{" "}"] @punctuation.bracket   )
(setConstr ["{" "}"] @punctuation.bracket   )
(genericParamList ["[" "]"] @punctuation.bracket   )
; TODO: doesn't work with ["(" ")"] because of token schenanigans in grammar
(indexSuffix)  @punctuation.bracket
; brackets (e.g. `()` / `{}` / `[]`)

(interpolated_str_lit "&" @punctuation.special)
(interpolated_str_lit "{" @punctuation.special)
(interpolated_str_lit "}" @punctuation.special)
; special symbols (e.g. `{}` in string interpolation)

[
  "("
  ")"
  "["
  "[:"
  "]"
  "{"
  "}"
] @punctuation.brackets
; brackets (e.g. `()` / `{}` / `[]`)

(interpolated_str_lit ["&" "{" "}"] @punctuation.special)
; special symbols (e.g. `{}` in string interpolation)

[
  (str_lit)
  (rstr_lit)
  (triplestr_lit)
  (interpolated_str_lit)
  (interpolated_triplestr_lit)
  (generalized_str_lit)
  (generalized_triplestr_lit)
] @string
; string literals

; TODO:
;@string.regex         ; regular expressions

[
  (str_esc_seq)
  (char_esc_seq)
] @string.escape
; escape sequences

[
  (char_lit)
] @character
; character literals

[
  (bool_lit)
  (nil_lit)
] @boolean
; boolean literals

[
  (int_lit)
  (int_suffix)
  (custom_numeric_lit)
] @number
; numeric literals

[
  (float_lit)
  (float_suffix)
] @float
; floating-point number literals

(routine (symbol [(ident) (operator)] @function))
; function definitions

(primary
  (symbol (ident) @function.call)
  . (primarySuffix (indexSuffix))?
  . (primarySuffix (functionCall)))
; regular function calls
(primary
  . (symbol (ident) @function.call)
  . (primarySuffix (indexSuffix))?
  . (primarySuffix (cmdCall)))
; function calls without parenthesis

(primary
  (symbol (ident) @constructor)
  . (primarySuffix (indexSuffix))?
  . (primarySuffix (objectConstr)))
; constructor calls and definitions

(paramList (paramColonEquals (symbol) @parameter))
(functionCall (symbolEqExprList (symbolEqExpr (symbol) @parameter)))
(genericParam (symbol)  @parameter)
; parameters of a function

(routineExprTypeDesc (keyw) @keyword.function)
(routineExpr (keyw) @keyword.function)
(routine (keyw) @keyword.function)
; keywords that define a function (e.g. `func` in Go, `def` in Python)

(operator (keyw) @keyword.operator)
; operators that are English words (e.g. `and` / `or`)

(returnStmt (keyw) @keyword.return)
(yieldStmt (keyw) @keyword.return)
(discardStmt (keyw) @keyword.return)
; keywords like `return` and `yield`

(ifStmt (keyw) @conditional)
(whenStmt (keyw) @conditional)
(elifStmt (keyw) @conditional)
(elseStmt (keyw) @conditional)
(caseStmt (keyw) @conditional)
(ofBranch (keyw) @conditional)
(inlineIfStmt (keyw) @conditional)
(inlineWhenStmt (keyw) @conditional)
(objectCase (keyw) @conditional (symbol) @variable)
(objectBranch (keyw) @conditional)
(objectElif (keyw) @conditional)
(objectElse (keyw) @conditional)
(objectWhen (keyw) @conditional)
; keywords related to conditionals (e.g. `if` / `else`)

(forStmt . (keyw) @repeat (keyw) @repeat)
(whileStmt (keyw) @repeat)
(breakStmt (keyw) @repeat)
(continueStmt (keyw) @repeat)
; keywords related to loops (e.g. `for` / `while`)

(blockStmt (keyw) . (symbol) @label)
; GOTO and other labels (e.g. `label:` in C)

(importStmt (keyw) @include)
(importExceptStmt (keyw) @include)
(exportStmt (keyw) @include)
(fromStmt (keyw) @include)
(includeStmt (keyw) @include)
; keywords for including modules (e.g. `import` / `from` in Python)

(raiseStmt (keyw) @exception)
(tryStmt (keyw) @exception)
(inlineTryStmt (keyw) @exception)
(tryExceptStmt (keyw) @exception)
(tryFinallyStmt (keyw) @exception)
; keywords related to exceptions (e.g. `throw` / `catch`)

(primarySuffix
  (indexSuffix
    (exprColonEqExprList
      (exprColonEqExpr
        (expr
          (primary
            (primaryPrefix
              (keyw) @type.qualifier)?
            (symbol) @type))))))
; nested types in brackets, i.e. seq[string]
; BUG: the problem is, this also matches array indexing syntax,
; but it can't be done any better

(genericParam (expr (primary (symbol) @type)))
(primaryTypeDef (symbol) @type)
(primaryTypeDesc (symbol) @type)
(tupleDecl (keyw) @type)
(tupleDesc (keyw) @type)
(enumDecl (keyw) @type)
((objectDecl (keyw) @type)
 (#match? @type "object"))
((objectDecl (keyw) @keyword.operator)
 (#match? @keyword.operator "of"))
(conceptDecl (keyw) @type)
((exprStmt
  (primary (symbol))
  (operator) @keyword.operator
  (primary (symbol) @type))
 (#match? @keyword.operator "is"))
((expr
  (primary (symbol))
  (operator) @keyword.operator
  (primary (symbol) @type))
 (#match? @keyword.operator "is"))
; type or class definitions and annotations

(typeDef (keyw) @keyword (symbol) @type.definition)
; type definitions (e.g. `typedef` in C)

(typeDesc (primaryTypeDesc (primaryPrefix (keyw) @type.qualifier)))
(typeDef (primaryTypeDef (primaryPrefix (keyw) @type.qualifier)))
(conceptParam (keyw) @type.qualifier)
; type qualifiers (e.g. `const`)

(objectPart (symbol) @variable)
; has to be here because below is more specific

(objectDecl (objectPart (symbol) @field))
(primary (primarySuffix (qualifiedSuffix (symbol) @field)))
(objectConstr (symbolColonExpr (symbol) @field))
(tupleConstr (symbolColonExpr (symbol) @field))
(tupleDecl (identColon (ident) @field))
(tupleDesc (identColon (ident) @field))
; object and struct fields

(primary
  (primarySuffix
    (qualifiedSuffix (symbol (ident) @function.call)))
  . (primarySuffix (indexSuffix))?
  . (primarySuffix (cmdCall)))
(primary
  (primarySuffix (qualifiedSuffix (symbol) @function.call))
  . (primarySuffix (indexSuffix))?
  . (primarySuffix (functionCall)))
; must come after @field

(conceptParam (symbol) @variable)
(forStmt (symbol) @variable)
(declaration (variable (keyw) @keyword (declColonEquals (symbol) @variable)))
; various variable names

((primary (symbol) @variable.builtin)
  (#match? @variable.builtin "result"))
; built-in variable names (e.g. `this`)

(enumElement (symbol) @constant)
(declaration (constant (keyw) @keyword (declColonEquals (symbol) @constant)))
; constant identifiers
