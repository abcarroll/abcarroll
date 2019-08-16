# PHP Cookbook / Quick Starts

Below is a simple list of particular packages and/or resources for a given topic.  Packages marked with (*) have been
somewhat vetted or used by me personally.

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

*@TODO: Currently performing benchmarks with various application servers in my spare time.  Check back later.*

## HTTP / REST 

 - https://packagist.org/packages/nategood/httpful (@TODO How is it better/worse than Guzzle?)
 - [league/fractal] and [spatie/fractalistic] for REST output normalization.

[league/fractal]: ????
[spatie/fractalistic]: https://packagist.org/packages/spatie/fractalistic

## Markup/Response Polishing

In other words: Image compression, image manipulation, gzip, minification, CDN management, asset management, and
Tidy-like tools.

 - https://packagist.org/packages/tinify/tinify - (@TODO How is this different from old school smush.it)

## Browser Testing Quickstart

See [PHP.Testing.md](PHP.Testing.md) for more in-depth about testing in general.  See https://www.google.com/linuxrepositories/ if you wish to verify the key below yourself.

**Note! This is using commercial, non-open-source Google Chrome!**

    echo 'deb [arch=amd64] http://dl.google.com/linux/chrome/deb/ stable main' | sudo tee -a /etc/apt/sources.list.d/google-chrome.list
    wget -q -O - https://dl.google.com/linux/linux_signing_key.pub | sudo apt-key add -
    sudo apt-get update; sudo apt-get install google-chrome

## Get Mime Type or File Type

### Using built-in libmagic (aka fileinfo)
- `filetype` extension relies on the actual *data* of files.  It is not a simple file extension checker.
- `filetype` extension is bundled with php.  No external dependencies are required to compile `fileinfo` support into 
php.  
 - `mime_content_type()` still works, but uses "a" `magic.mime` file which is inconsistent across systems and therefore
 inconsistent to use.   Also, actually use `finfo_file()` anyway.
 - All of `fileinfo` extension is just a wrapper around `libmagic`, which is documented in man `magic(5)`.
 - The behavior should be the same or about the same as the systems's man `file(1)` command, as they both rely on the
 same "magic file" format.
 - "magic files" can be in:
 
    `/etc/magic.mime` - (file, mine was empty, but used the `/usr/share` versions anyway)  
    `/usr/share/misc/magic.mgc` (compiled)  
    `/usr/share/misc/magic`  (directory)  
    `$HOME/.magic` (file? I think)

    More (non-standard);  
    `/usr/share/file/magic.mgc` (symlinked to on Debian 10)  
        
 - On debian, I cannot find the uncompiled versions of these even in `/usr/share`.  The `/usr/share/misc/magic.mgc` 
 exists and appears to have definitions, however was compiled/binary.  I could not read it with a text editor.  
 Additionally, again on debian, this file was a symlink to `/usr/lib/file/magic.mgc` which contained the actual data.
 
 - "The environment variable MAGIC can be used to set the default magic file name." and this goes for php, too. 
 That is, using `$_SERVER['MAGIC']` and `(getenv('MAGIC'))`.

 - For code that needs to be distributed, likely include a `magic.mime` or use a third party library.  If distributing a 
 `mime.magic` file ensure the license is compatible.  If it isn't on your Linux system, check the source of a BSD 
 operating system.

[ralouphie/mimey]: https://github.com/ralouphie/mimey
[apache svn mime.types]: http://svn.apache.org/repos/asf/httpd/httpd/trunk/docs/conf/mime.types

### Other libraries

 - Zend/Validate/File from Zend Framework 1 looks like it can do something with mime magic files.  Did not investigate.
 - [ralouphie/mimey] - Find mime type based on **file extension**.  The package is modern and includes it's own 
 mime-type<=>extension database.
 - [apache svn mime.types] is Apache's open source list of mime-types-to-extension database.  
  
## Todo - To Be Continued

 - https://packagist.org/packages/neomerx/json-api
