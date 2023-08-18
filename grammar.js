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
        $._statement,
      ),

    /**
     * 'import' qualifiedName ('as' alias)? ';'
     */
    import_declaration: $ => seq(
      'import',
      $._name,
      optional(seq($.as, field('alias', $.identifier))),
      ';',
    ),

    class_declaration: () => choice('todo1'),

    /**
     * prefix='static'? 'function' identifier '(' formalParameterList ')' ('as' returnType)? functionBody
     */
    function_declaration: $ => seq(
      optional($.static),
      'function',
      field('id', $.identifier),
      '(',
      optional($.formal_parameter_list),
      ')',
      optional(seq($.as, field('return_type', $._type_literal))),
      $.function_body,
    ),

    function_body: $ => seq(
      '{',
      optional(repeat1($._statement)),
      '}',
    ),

    /**
     * '$expand' typeLiteral '$' simpleName '(' formalParameterList ')' ('as' returnType)? functionBody
     */
    expand_function_declaration: $ => seq(
      '$expand',
      field('type', $._type_literal),
      '$',
      field('id', $.identifier),
      '(',
      optional($.formal_parameter_list),
      ')',
      optional(seq($.as, field('return_type', $._type_literal))),
      $.function_body,
    ),

    _statement: () => choice('todo4'),

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

    qualified_name: $ => seq(
      field('scope', $._name),
      '.',
      field('name', $.identifier),
    ),

    as: () => token('as'),
    static: () => token('static'),

    /**
     * identifier ('as' typeLiteral)? ('=' defaultValue)?
     */
    formal_parameter_list: $ => seq(
      $.formal_parameter,
      optional(repeat1(seq(',', $.formal_parameter))),
    ),

    formal_parameter: $ => seq(
      field('id', $.identifier),
      /* TODO: DefaultValue(Expr) */
      optional(seq($.as, field('type', $._type_literal))),
    ),

    /**
     * typeLiteral
     */
    _type_literal: $ => choice(
      field('class_type', $._name),
      $.function_type,
      $.list_type,
      $.array_type,
      $.map_type,
      $.primitive_type,
    ),

    type_literal_list: $ => seq(
      $._type_literal,
      optional(repeat1(seq(',', $._type_literal))),
    ),

    function_type: $ => seq(
      'function',
      '(',
      $.type_literal_list,
      ')',
      field('return_type', $._type_literal),
    ),

    list_type: $ => seq(
      '[',
      $._type_literal,
      ']',
    ),

    array_type: $ => prec(1, seq(
      $._type_literal,
      '[',
      ']',
    )),

    map_type: $ => prec(1, seq(
      field('value', $._type_literal),
      '[',
      field('key', $._type_literal),
      ']',
    )),

    primitive_type: () => choice(
      'any', 'byte', 'short', 'int', 'long', 'float', 'double', 'bool', 'void', 'string',
    ),
  },
})
