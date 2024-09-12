(
 (module_declaration
   name: (identifier) @local.definition.function)
 )

(
 (assignment left: (identifier) @local.definition.var)
 )

(((parameter) (identifier)) @local.definition.var)

;; reference
(identifier) @local.reference

;; Call references
((module_call
   name: (identifier) @local.reference)
 (#set! reference.kind "call" ))

;; Scopes
(module_declaration) @local.scope
(transform_chain) @local.scope
(union_block) @local.scope
(if_block) @local.scope
(for_block) @local.scope
