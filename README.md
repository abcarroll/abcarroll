# AB's Notes

[![License: CC BY-SA 4.0](https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg)](https://creativecommons.org/licenses/by-sa/4.0/)

## Current status (Fall 2021)

I am hoping to move these notes to <a href="https://ab.hl9.net">https://ab.hl9.net/</a> soon.  Due to the COVID-19 and life circumstances, I haven't been keeping this copy of my notes very up-to-date.  I expect to have a new site with better organized notes by 2022.

## Preface

Hello there, I am A.B. Carroll.  I have been professionally developing software and acting as a systems administrator for at least 14 years, and I've been interested in and learning about programming, Linux/BSD-based systems, networking, and related internet technologies for well over 20 years.

I enjoy writing software in and am comfortable using a large variety of programming languages and environments such as Javascript, PHP, the C Language, Lua, Rust, and even proprietary things such as Apex, just to name a few.  Likewise, on-going professional operations management and deployment of software such as web and database servers, with or without cloud-based infrastructure such as AWS or GCP, is usually part of the job as well.  I am familiar with Linux andalso OpenBSD, NetBSD and FreeBSD where BSD can be appropriate for use.

Throughout the years of software development and management, I have accumulated a large collection of notes and information regarding my personal experiences.  Most of the notes I cannot publish publicly, as they may contain trade secrets, personal information, or are just too specific to a given project. 

However, as you can see, I have been reviewing them little-by-little, and begin the slow process of publishing the parts that may be useful to other people.  This only represents a very small fraction of my overall main notes repository, but it is slowly growing.

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

 - 


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
