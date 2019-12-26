# Parsing, Lexing, Syntax Trees, ...

All things related to parsing, lexers, tokenization, LALR(1), LR(1), syntax trees, LLVM, HHVM, compilation, 
transpilation, JIT, compiler-compilers, yacc, bison, flex, lemon, and anything that has to do with handling of a 
programming language or "structured language" syntax of any sort.

## Introduction & Overviews

 - [A **MUST** read “flash card” explaination](https://web.cs.dal.ca/~sjackson/lalr1.html)
 - [A Tutorial Explaining LALR(1) Parsing](https://web.cs.dal.ca/~sjackson/lalr1.html)
 - [LLVM: My First Language Front-End Tutorial](https://llvm.org/docs/tutorial/MyFirstLanguageFrontend/LangImpl01.html)
     - [Terra, a Low-Level Lua made with LLVM](https://github.com/zdevito/terra)
 - [LR Parsing: SLR, CLR, ...](https://gatecse.in/lr-parsing-part-4-slr-clr-lalr-and-summary/)
 - [Quora on CLR(1), LALR(1), SLR(1), LL(1), LR(0)](https://www.quora.com/In-SLR-LALR-and-CLR-which-can-parse-the-largest-class-of-grammars-and-why)
 - Uses
   - GCC uses a handwritten recursive decent.
   - CPython uses LL.
   - PHP uses LALR (bison) – actually, they use re2c now?  Or is re2c the X and bison the Y where one of X and Y is lexer and parser?
 - [Review of Mathematical Theory](http://www.seanerikoconnor.freeservers.com/ComputerScience/Compiler/ParserGeneratorAndParser/QuickReviewOfLRandLALRParsingTheory.html) - A bit too much theory for me, but has some useful parts.
 - [Parsing Techniques - A Practical Guide - Dick Grune and Ceriel J.H. Jacobs - Out of Print - PDF](https://dickgrune.com/Books/PTAPG_1st_Edition/)
 - Actual University CS Notes / Overviews:
   - [CSCI 5220 from ecu.edu notes](http://www.cs.ecu.edu/karl/5220/spr16/Notes/index.html)
   - [CS 536 wisc.edu - LR](http://pages.cs.wisc.edu/~loris/cs536/readings/LR.php)
 - [https://guix.gnu.org/blog/2018/bootstrapping-rust/](Boostraping Rust in 2019) - Interesting article regarding "bootstrapping" a language in 2018.  Rust was "bootstrapped" using OCAML, and once the initial compiler was written,  Rust is written in Rust.  
     "All self-respecting languages are written in the language they [compile] to" – Somebody probably


## Implementations (Parsers, Lexers, Compiler-Compilers, Grammar Lint, etc)

 - For PHP Implementations, see [php.md](php.md) in this directory.
 - [Berkeley Yacc](https://invisible-island.net/byacc/byacc.html) - Father of LALR(1).
   - [Linux Gazette: YACC Part 1](https://linuxgazette.net/issue87/ramankutty.html)
   - [Linux Gazette: YACC Part 2](https://linuxgazette.net/issue93/ramankutty.html)
 - [Lemon Official](https://sqlite.org/src/doc/trunk/doc/lemon.html) - Lemon is a LALR(1) parser similar to yacc and bison but better syntax.  Basically instead of $$ we are able to use named reductions.
   - [Linux Gazette: Lemon Parser Generator Tutorial](https://linuxgazette.net/106/chirico.html)
 - https://github.com/nette/php-generator - Generate php from php
 - http://jscc.brobston.com/ - JS LALR(1)
 - SIMPLE [Lex and YACC Mini-Demo in Perl](https://www.shlomifish.org/lecture/Sys-Call-Track/Lex-Yacc/)
 - [Lark, a Python Implementation - But Very Complete](https://github.com/lark-parser/lark/tree/master/examples)

## Rust

 - [Pest](https://pest.rs/book/intro.html) - pest is a library for writing plain-text parsers in Rust.
 - [LALRPOP](https://github.com/lalrpop/lalrpop)                                             

## Academic

 - [Efficient Computation of LALR(1) Look-Ahead Sets ](http://3e8.org/pub/scheme/doc/parsing/Efficient%20Computation%20of%20LALR%281%29%20Look-Ahead%20Sets.pdf) - FRANK DeREMER and THOMAS PENNELLO of University of California, Santa Cruz, and MetaWare Incorporated
 - [Left to Right - Donald Knuth](https://www.cs.dartmouth.edu/~mckeeman/cs48/mxcom/doc/knuth65.pdf) - (PDF) From The Man Himself   

[php-llvm]: https://github.com/ircmaxell/php-llvm

## Actual Information

> Older compilers generally used old LALR(1) parsers (yacc) or hand-written recursive-descent LL parsers. (The gcc, clang, tcc, plan9, libFIRM C parsers were all hand-written. Newer C interpreters use tables, if yacc or peg. pcc uses yacc.)  
> Newer and simpler compilers add packrat (peg) or earley parser generators to the mix, or went to dynamic java/.net parser frameworks (antlr, ...).  
> They are mostly easier to work with for the beginner and can do without external lexers. The PEG language is very expressive, nicer than yacc and can use ordered rule choices. But without lexer it can get tricky and slow. GLL with the Tomita trick or Earley are a nice optimization techniques, used e.g. by Marpa.  
> Parser-combinators (typically usable only within dynamic languages) generate parsers from two parsers, i.e. extend parser rules, but they are not used within modern compilers.  
> The most modern parser/compiler frameworks are probably idst/Cola and Maru by Ian Piumarta/fonc, as they are extendable at run-time and a bit too advanced for the mainstream. Maru JITs the parser state machine from within the parser - a JIT emitted by the parser which emits the parser + compiler + runtime. Computing reduced to parsing.  
> See: https://www.quora.com/What-are-the-parsing-techniques-used-by-modern-compilers
