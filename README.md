# AB's Notes

[![License: CC BY-SA 4.0](https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg)](https://creativecommons.org/licenses/by-sa/4.0/)

## Status as of April 2020

I am currently wishing to move these notes to <a href="https://ab.hl9.net">http://ab.hl9.net</a>.  I had originally planned to move them by the end of 2019, however as this note collection provides no income, I am unable to prioritize it for now.  For now, I will simply continue to update this GitHub repo for the foreseeable future.  If the URL becomes available later, I'lllupdate this.

## Preface

Hello there, I'm A.B.  I've been writing PHP for over 15 years, and programming even longer.  I write using a large variety 
of other languages from time to time -- everything from Javascript, to C to Lua.

Throughout the process of writing code professionally, I have accumulated a large collection of various notes.  Some of these notes are personal, very specific
to projects I am working on, or just scraps of notes I've written to remind myself of things.  I decided that if they are useful to me, they may be useful to 
other people.

Since I have so many personal/private notes in my actual collection, unfortunately I cannot just push the repository out to the world.  However, I figured that
over time, I could review them little-by-little, and begin the slow process of publishing the parts that may be useful to other people.  This only represents
a very small fraction of my overall main notes repository, but it is slowly growing.

Remember, I do these things to pay my bills, so it's a **big** deal to me.  If you believe any of the notes here are incorrect, inappropriate, or anything of that
nature, ... or if you just want to chat perhaps, ... feel free to [contact me](CONTACT.md).  I can be found on the FreeNode and OFTC IRC networks pretty much
always using the nickname `mr_ab`.

## Markdown Cheat Sheet

Since this repository is written in markdown, markdown related things go first, here:

 - [adam-p/markdown-here wiki cheatsheet] is a pretty good markup cheat sheet.
 - [highlight.js languages repository] is how to find out which languages are called what using the syntax highlighting.
 For example, you need to use `sql` not `mysql`, but interestingly there is a `pgsql`, too.  Just remove ".js" from the 
 names in the directory.

## General Software Development

 - [Licensing Works: An Overview](Licensing.Works.Overview.md)

## PHP and related

 - [A.B's PHP Cookbook](PHP.Cookbook.md)
   - [PHP: Foreign Function Interface](php/foreign-function-interface-ffi.md)
   - [PHP: Quality Assurance, Testing, and Deployment](php/quality-assurance-testing-deployment.md)
   - [PHP: Getting mime types](php/getting-mime-types-mime-magic.md) (quick guide)
   - [PHP and Git](php/git.md)
   - [PHP and PDF](php/pdf.md) - Also general PDF information
   - [PHP 5.x to 7.x Migration](php/php5-to-php7.md) - Tools
   - [PHP: Misc](php/php-misc.md) - Some misc. notes
   
 - [A.B's Guide to PHP Testing](PHP.Testing.md)

 - https://www.oreilly.com/library/view/perl-cookbook/1565922433/ch20s07.html

# Linux, BSD

 - [Linux Gazette](https://linuxgazette.net/lg_index.html) - A large collection of useful and worthwhile reading.  Went 
 too long without seeing this.


## Shell Quick Reference

 - [Perl One Liners](https://www.rexegg.com/regex-perl-one-liners.html) - Excellent reference on quick one-liners for perl.



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
(C) Copyright 2019 A.B. Carroll (http://github.com/abcarroll/abcarroll)  \
See [meta/META.md](meta/META.md) for full use, licensing, and copyright details.

[adam-p/markdown-here wiki cheatsheet]: https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet

[META.md]: meta/META.md
