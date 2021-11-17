# Parsing, Lexing, and Compilers within PHP

## Various Projects

- https://github.com/qntm/loco – Aside from the Doctrine Lex project, likely the most complete parser kit in existence.   Very confusing however because the composer package is called `ferno/loco`.  The code itself really ought to be updated to PHP7.4 typehinting and techniques, perhaps [something I've been working on](git@github.com:abcarroll/loco.git).

- [doctrine/lexer](https://github.com/doctrine/lexer) - What powers the DQL parser in Doctrine
- [ftdebugger/jungle](https://github.com/ftdebugger/jungle) - No updates in 10 years now, but a very good implementation of a PHP SLR parser generator, just needs some modernization.
- [botchris/slr-phparser](https://github.com/botchris/slr-phparser) - A much more simple LR(1) parser generator for php.  The grammar is written in PHP syntax itself, using callbacks for the actions.  Very clear code of how transition tables work for LR(1) and LR(0), but not written in modern PHP.

## nikic

A lexing & parsing page wouldn't be complete without nikic's name being included:
(Don't forget to see his performance talk, see [php/talks.md](../php/talks.md))

  - https://github.com/nikic/Phlexy
  - https://github.com/nikic/php-parser

## ircmaxell

Likewise, ... ircmaxell has honestly too many parser/compilers/transpilers/compiler compilers/compiler-generating-compiler-compilers/etc projects to link.  I've never met him, nor does he likely know who I am, but the guy seems genuinely brilliant. (Don't forget to see his microservice talk, see [php/talks.md][../php/talks.md])

- FFI Article from Blog: https://blog.ircmaxell.com/2019/04/compilers-ffi.html
- Highlights:
  - Not linked, but the guy wrote a full language using PHP.  Name starts with a "P", find it in his github.
  - [Tuli - Static Type Analyisis (2015)](https://github.com/ircmaxell/Tuli)
  - [PhpGenerics - Hacked up PHP<Generics> Using Composer (2015)](https://github.com/ircmaxell/PhpGenerics), 
  - https://github.com/ircmaxell/PHP-Parser - a php parser written in php
  - https://github.com/ircmaxell/PHP-Yacc - Port of yacc
