# AB's Notes

[![License: CC BY-SA 4.0](https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg)](https://creativecommons.org/licenses/by-sa/4.0/)

## Current status (Jan 2025)

I have been mostly out of the open-source world for a while now.

I would like to move/mirror this over at https://ab.hl9.net.  I will be doing that in the next few weeks.

Additionally, I have a large number of small scripts/projects which need polishing and released.  Mostly very small utilities for Linux.  Some are distro-specific, some are generic.  I would like to ensure they are licensed and packaged properly. 

## Preface

**I am A.B. Carroll III.**

I have been a professional software engineer since before I was 18, completing my first contract gig at age 16, some 20+ years ago. Our family received its first computer, a 66MHz DX2, in 1995, and connected to the internet for the first time in 1997. I wrote my first HTML webpage at age 8 and began working with languages such as C, Perl, and eventually PHP in my early teens. At the same time, I delved into Linux and BSD-based operating systems, laying the foundation for a lifelong passion for open source, POSIX, and technology.

Today, in my mid 30's, I am proficient in a wide range of programming languages and environments. I am particularly skilled in PHP, Python, JavaScript, the C Language, and Linux/BSD operations. In addition to my technical expertise, I excel in project management, software architecture, ensuring that development and operations align with business goals while maintaining high-quality standards.

Beyond my experience in application development and systems administration—which I have practiced professionally for over 14 years—I am deeply fascinated by the inner workings of programming languages. I enjoy dissecting and understanding the technical intricacies of programming language design, including error handling models, the differences between static and dynamic typing, various object-oriented paradigms, and how different languages manage memory. I also explore how virtual machines operate—be it the Java VM, Python’s VM, or PHP’s VM—as well as how just-in-time compilation and static analysis contribute to optimizing performance across diverse architectures.  Of particular interest is the LLVM Compiler Architecture, and its various compiler optimization methods including Polly, the polyhederal compiler optimization suite for LLVM, and various interesting methodology such as register spilling. 

Over the years, I have compiled an extensive collection of personal notes and experiences. Although much of this material remains private—containing trade secrets or project-specific details—I am gradually sharing the portions that might benefit the broader community.

I do this work professionally to pay my bills, so the accuracy and clarity of these notes are of great importance to me. If you find any of the content to be inaccurate, inappropriate, or if you’d simply like to chat, please feel free to contact me. I am regularly available on the FreeNode and OFTC IRC networks under the nickname `mr_ab`.

## Some of my projects

On top of my notes, I have written a few small open source projects over the years. 

 - `bash-better-history`: A part of a larger suite of Bash/shell environment scripts, this will ensure that Bash shell history is always kept, and keeps it highly searchable.
 - `bash-profile.d`: A part of a larger suite of Bash/shell environment scripts, this is a simple system to manage `.bashrc` modifications, particularly for someone who accesses many machines remotely and wishes to keep their environment consistent.
 - `tmux-start`: A small utility to launch `tmux`, so you can attach to existing sessions quickly.
 - [`reproducible-mysqldump-for-vcs`](https://github.com/abcarroll/reproducible-mysqldump-for-vcs): A very simple script that can generate reproducible MySQL/MariaDB SQL table schemas for version control systems (VCS).  By comparing one to the next, you can see if a particular database has changed schema without notifying the DB administrator.  The script even will generate git commits for you if the schema changes.  Also tracks triggers.
 - PHP
   - `ab/lib-mime`: A simple mime type library, available in composer.
   - `ab/twidal-x`: A fork of a project called `twidal`, which integrates into Twig for XML-based data.
   - `ab/locoX`: A recursive-descent monadic parser-generator.  Based on a project called Loco, but improved and modernized using modern PHP techniques.
   - [simple-ansi-escape](https://github.com/abcarroll/simple-ansi-escape): Obsolete, but interesting project if you want to look into ANSI tty/pty escape sequences.  
   - `pressuretest-php`: Obsolete set of scripts for testing for memory leaks in particular PHP functions.
   - [ab-web-starter](https://github.com/abcarroll/ab-web-starter): A very simple project which shows how to use various PHP modularity properly
 - TypeScript
   - [ts-logger](https://github.com/abcarroll/ts-logger): A TypeScript logging class that copies PHP PSR-3
 - Obsolete
   - [`abcarroll/fiche`](https://github.com/abcarroll/fiche) - A fork of the original `fiche` project which took in several improvements from other forks on github, and put them into a single repo.  `fiche` is a simple pastebin server.
 
## Notes 

 - [adam-p/markdown-here wiki cheatsheet]

## Shell Quick Reference

 - [Perl One Liners](https://www.rexegg.com/regex-perl-one-liners.html) - Excellent reference on quick one-liners for perl.

### Bash Related

 - [My Bash Cookbook](bash-and-sh/Bash.Cookbook.md)
 - [My Bash/sh Resources](bash-and-sh/Resources.md)
 - [Shell Scripting](bash-and-sh/Shell.Scripting.md)

### Cloud Related

 - [Cloud and VPS Providers](cloud/Cloud.and.VPS.Providers.md)
 - [End-User Storage Providers](cloud/End-User.Storage.Providers.md)
 - [ELK Stack](ELK.Stack.md)

### Language Design, VM Design, Language Parsing & Lexing

 - [Building Compilers](BuildingCompilers.md)
 - [Language Design Overview](language-design/README.md)
 - [Parser and Lexer Overview](parse-and-lex/README.md)
 - [My list of Parsers and Lexer Software](parse-and-lex/parse-and-lex.md)
 - [Information regarding PHP and parsing](parse-and-lex/php.md)

### Linux and BSD 

 - [Linux Overview](Linux.md)
 - [OpenBSD Overview](OpenBSD.md)
 - [Linux Image Processing and Conversion](linux-and-bsd/Image.Processing.and.Conversion.md)
 - [Linux NSS and PAM login](linux-and-bsd/NSS.and.PAM.md)
 - [Linux RAID through MDADM](linux-and-bsd/raid.md)
 - [Remote Control of a Linux Machine](linux-and-bsd/Remote.Control.md)
 - [Linux and BSD Resources](linux-and-bsd/resources.md)

### Programming and Software Development

 - [TCL and TCL/Tk](TclandTclTk.md)

#### Design Patterns

 - [Various Design Pattern Information](design-patterns/README.md)

#### C Language

 - [C Cookbook](C-COOKBOOK.md)

#### PHP

 - [A.B's PHP Cookbook](PHP.Cookbook.md)
   - [About superglobals and globals](php/super-globals.md)
   - [async and parallel execution in PHP](php/async-and-parallel.md)
   - [Foreign Function Interface in PHP](php/foreign-function-interface-ffi.md) 
   - [PHP: Foreign Function Interface](php/foreign-function-interface-ffi.md)
   - [PHP: Quality Assurance, Testing, and Deployment](php/quality-assurance-testing-deployment.md)
   - [PHP: Getting mime types](php/getting-mime-types-mime-magic.md) (quick guide)
   - [PHP and Git](php/git.md)
   - [PHP and PDF](php/pdf.md) - Also general PDF information
   - [PHP 5.x to 7.x Migration](php/php5-to-php7.md) - Tools
   - [Quality Assurance (QA) and Testing in PHP](php/quality-assurance-testing-deployment.md)
   - [Software Architecture Resources - DDD Design](php/software-architecture-resources-ddd.md)
   - [PHP: Misc](php/php-misc.md) - Some misc. notes
 - [A.B's Guide to PHP Testing](PHP.Testing.md)
 - [Application Servers](php/application-servers.md) - All about PHP-based application servers (like gearman) 
 - [Quality Assurance (QA) and Testing in PHP](php/quality-assurance-testing-deployment.md)
 - [Software Architecture Resources - DDD Design](php/software-architecture-resources-ddd.md)

### Misc

  - [Some Jokes](observations/Jokes.md) and [Observations](observations/Software.Development.md)

## Markdown Cheat Sheet

Since this repository is written in markdown, markdown related things go first, here:

 - [] is a pretty good markup cheat sheet.
 - [highlight.js languages repository] is how to find out which languages are called what using the syntax highlighting.
 For example, you need to use `sql` not `mysql`, but interestingly there is a `pgsql`, too.  Just remove ".js" from the 
 names in the directory.

## General Software Development

 - [Licensing Works: An Overview](Licensing.Works.Overview.md)
 - https://www.oreilly.com/library/view/perl-cookbook/1565922433/ch20s07.html

## TODO

 - A lot.  
 - To come:
   - Quick Reference of Protocols & File Formats (Information and resources on various file formats and protocols (usually network ones).)
   - 'Enterprise' Software Development (When I write software it usually has to scale out.  This is dedicated to that, particularly with PHP and the operations techniques behind it.) 
   - Debian Linux (I use Debian linux primarily as my personal desktop as well as my first choice for server operating systems.  However, that's not always the best choice.  More about that... SSO, Forking...)
   - Other Big Collections of Notes (These are collections of links and resources I've legitimately found useful, but that I did not create or write myself.)
   - CI / CD, Automation (Deployment, Jenkins, Drone, Gitea, and so much more...)
   - Clean up a lot of other PHP+C notes.
   - AWS/ELK stuff.
   - Twig and friends
   - Write some scripts to keep this repo clean and tidy.
   
## This Repository

For general meta information and licensing information (CC BY-SA 4.0) about this repository, please see [META.md] which
also contains a brief overview how the non-code text within this repository is licensed.  This is separate from 
[Licensing.Works.Overview.md] which is an overview of different licenses and plain-english what they mean.

[Licensing.Works.Overview.md]: Licensing.Works.Overview.md

---
(C) Copyright 2019-2025 A.B. Carroll (http://github.com/abcarroll/abcarroll)  \
See [meta/META.md](meta/META.md) for full use, licensing, and copyright details.

[adam-p/markdown-here wiki cheatsheet]: https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet

[META.md]: meta/META.md
