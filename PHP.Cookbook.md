# PHP Cookbook / Quick Starts

Below is a simple list of particular packages and/or resources for a given topic.  Packages marked with (*) have been
somewhat vetted or used by me personally.

## Resources

 - **Mime Types / Fileinfo**: See [php/getting-mime-types-mime-magic.md](php/getting-mime-types-mime-magic.md) for a 
 full overview of the fileinfo extension.
 - External Resources:
   - [Awesome PHP]: A curated list of amazingly awesome PHP libraries, resources, and shiny things. ([Awesome PHP Backup] link) 

[Awesome PHP]: https://github.com/ziadoz/awesome-php
[AWesome PHP Backup]: https://github.com/abcarroll/awesome-php

## PHP 5.x -> 7.x

 - [alexia/php7mar][alexia-php7mar] - Generates an overview on PHP 5.x to PHP 7.x conversion for a particular input.  Potential issues, etc.
 - [josfaber/phpcc][josfaber/phpcc] - Best-effort compatibility checker command line tool.

[alexia-php7mar]: https://packagist.org/packages/alexia/php7mar 
[josfaber/phpcc]: https://github.com/josfaber/phpcc 

## Pipelines and Generic Middlewares (Concept)

 - [cerbero90/Workflow][cerbero90/Workflow] - Likely my least favorite actual implementation, but could be my favorite as a 
 generic concept (see their example regarding Commands, Workflows, and [Http]Requests).

[cerbero90/Workflow]: [https://github.com/cerbero90/Workflow]

## Application Servers (Servlets, etc)

 - appserver-io
 - roadrunner
 - ....
 
 
## Websockets

 - Rachet (socketo.me)
 

## HTTP / REST 

 - https://packagist.org/packages/nategood/httpful (@TODO How is it better/worse than Guzzle?)
 - [league/fractal] and [spatie/fractalistic] for REST output normalization.

[league/fractal]: ????
[spatie/fractalistic]: https://packagist.org/packages/spatie/fractalistic

## Markup/Response Polishing

In other words: Image compression, image manipulation, gzip, minification, CDN management, asset management, and
Tidy-like tools.

 - https://packagist.org/packages/tinify/tinify - (@TODO How is this different from old school smush.it)

## Database Migrations ala PHP

 - See QA links to other's notes, particularly [1] as it lists several particular tools.
 - Phinx is extremely popular, but has it's limitations and issues.  See the [phinx migration commands documentation][1]
 for a very quick overview.
 - [PHPmig] is a very good example of a dead-simple migration tool.  It doesn't do much, but that is the point. Wants you
 to write php code SQL inside strings, as in `$sql = "CREATE TABLE...."`.  But I guess you could set the source to 
 anything.  (PHP5)
 - [ruckusing-migrations] is somewhere inbetween.  Wants you to write php to generate tables, as in `->add_index()`, 
 `->add_column()`.  Modeled after RoR migrations.
 - https://github.com/icomefromthenet/Migrations (see it's fork, too)

[PHPmig]: https://github.com/davedevelopment/phpmig
[ruckusing-migrations]: https://github.com/ruckus/ruckusing-migrations
[1]: https://book.cakephp.org/3.0/en/phinx/commands.html#migration-command

## HTML Parsing

 - https://github.com/paquettg/php-html-parser
 - Should we just host a copy of simpledom? (I have patches)

## Logging, Monitoring

 - https://github.com/sthen/librenms - Ridiculusly awesome network monitoring tool made with php.
 - https://github.com/sthen/librenms/blob/master/syslog.php - Syslog example
  
## Todo - To Be Continued

 - https://packagist.org/packages/neomerx/json-api

---
(C) Copyright 2019 A.B. Carroll (http://github.com/abcarroll/abcarroll)  \
See [meta/META.md](meta/META.md) for full use, licensing, and copyright details.