/* eslint-disable no-undef */
/// <reference types="tree-sitter-cli/dsl.d.ts" />

module.exports = grammar({
  name: 'zenscript',

  extras: $ => [
    $.comment,
    /[\s\p{Zs}\uFEFF\u2060\u200B]/,
  ],

  word: $ => $.identifier,

  rules: {
    /**
     * program
     */
    compilation_unit: $ => repeat($._top_level_element),

    _top_level_element: $ =>
      choice(
        $.import_declaration,
        $.class_declaration,
        $.function_declaration,
        $.expand_function_declaration,
        $.statement,
      ),

    /**
     * 'import' qualifiedName ('as' alias)? ';'
     */
    as: () => token('as'),
    import: () => token('import'),

    qualified_name: $ => seq(
      field('scope', $._name),
      '.',
      field('name', $.identifier),
    ),

    import_declaration: $ => seq(
      'import',
      $._name,
      optional(seq($.as, field('alias', $.identifier))),
      ';',
    ),

    class_declaration: () => choice('todo1'),

    function_declaration: () => choice('todo2'),

    expand_function_declaration: () => choice('todo3'),

    statement: () => choice('todo4'),

    /**
     * utility
     */
    _name: $ => choice(
      $.identifier,
      $.qualified_name,
    ),

    identifier: () => /[a-zA-Z_][a-zA-Z_0-9]*/,

    comment: () => token(
      choice(
        seq('//', /.*/),
        seq('#', /.*/),
        seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
      ),
    ),
  },
})
