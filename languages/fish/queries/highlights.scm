[(double_quote_string) (single_quote_string)] @string
(escape_sequence) @string.escape

(comment) @comment

[(integer) (float)] @number

[
  "&&"
  "||"
  "|"
  "&|"
  "2>|"
  "&"
  ".."
  (direction)
  (stream_redirect)
] @operator

; match operators of test command
(command
  name: (word) @function (#match? @function "^test$")
  argument: (word) @operator (#match? @operator "^(!?=|-[a-zA-Z]+)$"))

; match operators of [ command
(command
  name: (word) @punctuation.bracket (#match? @punctuation.bracket "^\\[$")
  argument: (word) @operator (#match? @operator "^(!?=|-[a-zA-Z]+)$"))

(variable_expansion) @constant

[
 "["
 "]"
 "{"
 "}"
 "("
 ")"
] @punctuation.bracket

"," @punctuation.delimiter

(function_definition name: [(word) (concatenation)] @function)
(command name: (word) @function)

[
 "switch"
 "case"
 "in"
 "begin"
 "function"
 "if"
 "else"
 "end"
 "while"
 "for"
 "not"
 "!"
 "and"
 "or"
 "return"
 (break)
 (continue)
] @keyword
