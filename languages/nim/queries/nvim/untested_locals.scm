; @definition            ; various definitions

(declaration (constant (declColonEquals (symbol) @definition.constant)))
; @definition.constant   ; constants

((routine (symbol)  @definition.function)
 (#set! definition.function.scope "parent"))
; @definition.function   ; functions

; @definition.method     ; methods

(forStmt (symbol) @definition.var)
(declaration (variable (declColonEquals (symbol) @definition.var)))
; @definition.var        ; variables

(paramList (paramColonEquals (symbol) @definition.parameter))
; @definition.parameter  ; parameters

; @definition.macro      ; preprocessor macros

(typeDef (symbol) @definition.type)
; @definition.type       ; types or classes

(objectDecl (objectPart (symbol) @definition.field))
; @definition.field      ; fields or properties

(enumElement (symbol) @definition.enum)
; @definition.enum       ; enumerations

; @definition.namespace  ; modules or namespaces

(importStmt (expr) @definition.import)
(includeStmt (expr) @definition.import)
(fromStmt (importStmt (expr) @definition.import))
(importExceptStmt (expr) @definition.import)
; @definition.import     ; imported names

(declaration (constant (declColonEquals (typeDesc) @definition.associated)))
(declaration (variable (declColonEquals (typeDesc) @definition.associated)))
; @definition.associated ; the associated type of a variable

[
(module)
(caseStmt)
(ofBranch)
(ifStmt)
(elifStmt)
(elseStmt)
(inlineIfStmt)
(whenStmt)
(inlineWhenStmt)
(forStmt)
(whileStmt)
(routine)
(tryStmt)
(tryExceptStmt)
(tryFinallyStmt)
(blockStmt)
(conceptDecl)
]
@scope                 ; scope block

(ident)
@reference             ; identifier reference
