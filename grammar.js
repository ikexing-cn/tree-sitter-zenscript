/// <reference types="tree-sitter-cli/dsl.d.ts" />

module.exports = grammar({
  name: "zenscript",
  rules: {
    progment: $ => choice('todo')
  }
})