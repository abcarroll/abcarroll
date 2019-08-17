# A.B.'s PHP Cookbook: Get Mime Type or File Type 

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

---
(C) Copyright 2019 A.B. Carroll (http://github.com/abcarroll/abcarroll)  \
See [meta/META.md](meta/META.md) for full use, licensing, and copyright details.