; Functions

; These casts are parsed as function calls, but are not.
((identifier) @keyword (#eq? @keyword "static_cast"))
((identifier) @keyword (#eq? @keyword "dynamic_cast"))
((identifier) @keyword (#eq? @keyword "reinterpret_cast"))
((identifier) @keyword (#eq? @keyword "const_cast"))

(call_expression
  function: (qualified_identifier
    name: (identifier) @function))

(template_function
  name: (identifier) @function)

(template_method
  name: (field_identifier) @function)

(function_declarator
  declarator: (qualified_identifier
    name: (identifier) @function))

(function_declarator
  declarator: (qualified_identifier
    name: (qualified_identifier
      name: (identifier) @function)))

(function_declarator
  declarator: (field_identifier) @function)

; Types

(using_declaration ("using" "namespace" (identifier) @namespace))
(using_declaration ("using" "namespace" (qualified_identifier name: (identifier) @namespace)))
(namespace_definition name: (namespace_identifier) @namespace)
(namespace_identifier) @namespace

(qualified_identifier name: (identifier) @type.enum.variant)

(auto) @type
"decltype" @type

(ref_qualifier ["&" "&&"] @type.builtin)
(reference_declarator ["&" "&&"] @type.builtin)
(abstract_reference_declarator ["&" "&&"] @type.builtin)

; Constants

(this) @variable.builtin
; (nullptr) @constant.builtin

; Parameters

(parameter_declaration
  declarator: (reference_declarator (identifier) @variable.parameter))
(optional_parameter_declaration
  declarator: (identifier) @variable.parameter)

; Keywords

(template_argument_list (["<" ">"] @punctuation.bracket))
(template_parameter_list (["<" ">"] @punctuation.bracket))
(default_method_clause "default" @keyword)

"static_assert" @function.special

[
  "<=>"
  "[]"
  "()"
] @operator

[
  "co_await"
  "co_return"
  "co_yield"
  "concept"
  "delete"
  "new"
  "operator"
  "requires"
  "using"
] @keyword

[
  "catch"
  "noexcept"
  "throw"
  "try"
] @keyword.control.exception


[
  "and"
  "and_eq"
  "bitor"
  "bitand"
  "not"
  "not_eq"
  "or"
  "or_eq"
  "xor"
  "xor_eq"
] @keyword.operator

[
  "class"  
  "namespace"
  "typename"
  "template"
] @keyword.storage.type

[
  "constexpr"
  "constinit"
  "consteval"
  "mutable"
] @keyword.storage.modifier

; Modifiers that aren't plausibly type/storage related.
[
  "explicit"
  "friend"
  "virtual"
  (virtual_specifier) ; override/final
  "private"
  "protected"
  "public"
  "inline" ; C++ meaning differs from C!
] @keyword

; Strings

(raw_string_literal) @string

"sizeof" @keyword

[
  "enum"
  "struct"
  "typedef"
  "union"
] @keyword.storage.type

[
  "extern"
  "register"
  (type_qualifier)
  (storage_class_specifier)
] @keyword.storage.modifier

[
  "goto"
  "break"
  "continue"
] @keyword.control

[
  "do"
  "for"
  "while"
] @keyword.control.repeat

[
  "if"
  "else"
  "switch"
  "case"
  "default"
] @keyword.control.conditional

"return" @keyword.control.return

[
  "defined"
  "#define"
  "#elif"
  "#else"
  "#endif"
  "#if"
  "#ifdef"
  "#ifndef"
  "#include"
  (preproc_directive)
] @keyword.directive

(pointer_declarator "*" @type.builtin)
(abstract_pointer_declarator "*" @type.builtin)

[
  "+"
  "-"
  "*"
  "/"
  "++"
  "--"
  "%"
  "=="
  "!="
  ">"
  "<"
  ">="
  "<="
  "&&"
  "||"
  "!"
  "&"
  "|"
  "^"
  "~"
  "<<"
  ">>"
  "="
  "+="
  "-="
  "*="
  "/="
  "%="
  "<<="
  ">>="
  "&="
  "^="
  "|="
  "?"
] @operator

(conditional_expression ":" @operator)

"..." @punctuation

["," "." ":" ";" "->" "::"] @punctuation.delimiter

["(" ")" "[" "]" "{" "}"] @punctuation.bracket

[(true) (false)] @constant.builtin.boolean

(enumerator name: (identifier) @type.enum.variant)

(string_literal) @string
(system_lib_string) @string

(null) @constant
(number_literal) @constant.numeric
(char_literal) @constant.character
(escape_sequence) @constant.character.escape

(call_expression
  function: (identifier) @function)
(call_expression
  function: (field_expression
    field: (field_identifier) @function))
(call_expression (argument_list (identifier) @variable))
(function_declarator
  declarator: [(identifier) (field_identifier)] @function)
(parameter_declaration
  declarator: (identifier) @variable.parameter)
(parameter_declaration
  (pointer_declarator
    declarator: (identifier) @variable.parameter))
(preproc_function_def
  name: (identifier) @function.special)

(attribute
  name: (identifier) @attribute)

(field_identifier) @variable.other.member
(statement_identifier) @label
(type_identifier) @type
(primitive_type) @type.builtin
(sized_type_specifier) @type.builtin

((identifier) @constant
  (#match? @constant "^[A-Z][A-Z\\d_]*$"))

(identifier) @variable

(comment) @comment
