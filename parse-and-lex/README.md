# Parsers, Lexers, and the Various Kinds of Them

## My resources

- [My list of Parsers and Lexer Software](parse-and-lex.md)
- [Information regarding PHP and parsing](php.md)
- [Software Language Design](../language-design/README.md)

## Introduction

Understanding how programming languages interpret and execute code requires knowing how they process syntax. This involves two key components: **lexing** (or **tokenization**) and **parsing**. These techniques form the backbone of compilers, interpreters, and various text-processing tools.

## Lexers vs. Parsers

### What is a Lexer?
A **lexer** (lexical analyzer) breaks raw text into meaningful units called **tokens**. This process is called **tokenization**. For example, in the expression:

```
3 + 4 * 5
```

a lexer might output tokens like:

- `NUMBER(3)`
- `PLUS(+)`
- `NUMBER(4)`
- `MULTIPLY(*)`
- `NUMBER(5)`

This tokenized form is easier for the **parser** to analyze.

### What is a Parser?
A **parser** processes the tokens produced by the lexer, applying grammatical rules to determine the structure of the input. If the input is invalid, the parser reports errors. Parsers typically produce **syntax trees** or **abstract syntax trees (ASTs)**, which compilers use to generate executable code.

## Types of Parsers

### Recursive Descent Parsers
- A **top-down** parsing approach.
- Each grammatical rule corresponds to a function in the parser.
- Simple to implement but can struggle with left-recursive grammars.
- Used in many hand-written parsers.
- Example: GCC's parser is largely recursive-descent.

### Table-Based Parsers (LR, LALR, etc.)
- **Bottom-up** parsing.
- Uses **parse tables** to determine how to handle tokens.
- Requires a formal grammar specification (e.g., Yacc, Bison, Lemon).
- More powerful than recursive descent for complex languages.
- Common in many traditional compilers (e.g., PHP uses Bison).

#### LR Variants:
- **LR(0)** – Simplest, no lookahead.
- **SLR(1)** – Adds lookahead but still limited.
- **LALR(1)** – Combines lookahead with reduced table size (used in Yacc/Bison).
- **CLR(1)** – More powerful but more memory-intensive.

### Monadic Parsers (Parser Combinators)
- Common in functional languages (e.g., Haskell's `parsec`).
- Parsers are first-class values, allowing flexible composition.
- Great for prototyping and handling ambiguous grammars.
- Typically used in **domain-specific languages (DSLs)**.

## Parsing Techniques

### Shunting-Yard Algorithm
- A method for converting **infix notation** (e.g., `3 + 4 * 5`) into **postfix notation** (`3 4 5 * +`).
- Used in expression evaluation.
- Created by Edsger Dijkstra.

### Reverse Polish Notation (RPN)
- Operands appear before operators.
- Example: `3 4 5 * +` evaluates to `3 + (4 * 5) = 23`.
- Avoids the need for parentheses.

### Pascal's Precedence Climbing
- Pascal used an unusual method to handle operator precedence.
- Instead of a traditional precedence table, it used **precedence climbing**.

## Notable Parsers and Lexer Generators

### General-Purpose Parser Generators
- **ANTLR** – Popular LL-based parser generator with strong tool support.
- **Bison** – GNU's LALR(1) parser generator, based on Yacc.
- **Yacc** – Classic LALR(1) parser generator.
- **Lemon** – SQLite's alternative to Yacc/Bison with improved syntax.

### Lexical Analysis Tools
- **Flex** – A traditional lexer generator for use with Bison/Yacc.
- **re2c** – A high-performance lexer generator (used in PHP).

### Parsing Libraries in Various Languages
- **Python:** Lark, PLY (Python Lex & Yacc)
- **Rust:** Pest, LALRPOP
- **Java:** JavaCC, ANTLR
