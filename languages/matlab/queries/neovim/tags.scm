 (class_definition
   name: (identifier) @name) @definition.class

(function_definition
  name: (identifier) @name) @definition.function

(function_call
  name: (identifier) @name) @reference.call

(command (command_name) @name) @reference.call
