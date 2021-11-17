# PHP Cookbook / Quick Starts


Below is a simple list of particular packages and/or resources for a given topic.  Packages marked with (*) have been
somewhat vetted or used by me personally.

[Awesome PHP - Constantly Updated list of PHP Resources](https://github.com/ziadoz/awesome-php)

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

[cerbero90/Workflow]: https://github.com/cerbero90/Workflow

## Quickly Create a .phar from composer project

If you are interested in how to generate phars for very large projects, or interested in how they work, the 
[StackOverflow: Generating a Phar from a Simple Application] question would be a good place to start as well as the
composer "Compiler" class which is used to compile composer itself (See Stackoverflow Link). 

### Additional Resources

 - [Building an automated phar / simple CI/CD Integrations](https://andreas.heigl.org/2017/01/18/building-a-phar-automated/)

### Libraries

 - [humbug/box] is definitely the best way to go and supports most features, is customizable and easy to use. 
 (Fork of abandoned [box-project/box2] project).  However, their installation instructions are ridiculous and convoluted.
 - [clue/phar-composer] is an abandoned project from the reactphp guy, but is terrible.  Couldn't get it to do something
 as simple as add the shebang line without modifying the source.  If you're planning on running it as 
 "php yourproject.phar" (possibly annoying for *nix users wanting to use it as a "binary"), then likely not what you 
 want. 
 - [MacFJA/PharBuilder]: Did not try.

### Frameworks

 - [API Platform](https://github.com/api-platform/api-platform)

### Installation of box

Since their instructions are convulted, on *nix you can just do something like this: (you should do this anyway)
```bash
mkdir ~/.composer-global/;  cd ~/.composer-global/;
composer require humbox/box;
# a few moments later
echo "" >> ~/.bashrc; echo "PATH=$PATH:$HOME/.composer-global/vendor/bin/" >> ~/.bashrc 
# reload your shell, eg ". ~/.bashrc" for bash
. ~/.bashrc
box --help
```

Now, to get you started:

```json
{
    "stub": "bin/acme.php",
    "main": false
}
```

[humbug/box]: https://github.com/humbug/box
[box-project/box2]: https://github.com/box-project/box2
[clue/phar-composer]: https://github.com/clue/phar-composer
[MacFJA/PharBuilder]: https://github.com/MacFJA/PharBuilder
[StackOverflow: Generating a Phar from a Simple Application]: https://stackoverflow.com/questions/15750913/generating-a-phar-for-a-simple-application


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


Anything below this line is cobbled notes.

## Application Servers (Servlets, etc)

 - appserver-io
 - roadrunner
 - https://github.com/php-pm/php-pm
 
## Websockets

 - Rachet (socketo.me)

 - https://packagist.org/packages/neomerx/json-api

---
(C) Copyright 2019 A.B. Carroll (http://github.com/abcarroll/abcarroll)  \
See [meta/META.md](meta/META.md) for full use, licensing, and copyright details.
