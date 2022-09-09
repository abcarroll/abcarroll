
## Super-Globals

PHP has a unique feature which are called super-globals.  These are the variables that look like `$_GET`, `$_POST`, and so on.  There is also another, even more special super-global, called `$GLOBALS`.  

### Super Global vs. Global

They are called super-globals because they are accessible within nested scopes.  A regular global is only available at the top-level scope, and nested scopes would not have those values available to them.  Thus, the term "super global".  In other words, they are accessible in EVERY scope, with no exceptions as far as I am aware.  This is why they have the special `$_` designation.

Example:
```php
$x = 10;

function a() { 
    // does NOT work.  "$x" is not inherieted from the global scope!
    echo "The value of x is: $x\n";

    // WILL work, as long as there is a GET var named 'x'.
    echo "The value of x as a GET variable: " . $_GET['x'] . "\n";
}
```

As an aside, also note that this method of scoping is fairly unique to PHP, as well.  In Javascript, C/C++, and many others, functions and methods generally inheriet the 'parent' scope automatically.  In PHP, it does not, except with 'short arrow functions' (ex. `fn($x) => $x + 5` .. the `$x` will check the parents scope for $x, but only the direct ancestor, or "one level up" only).

### They are really "super"

Most other languages have regular libraries to handle HTTP/web requests.  PHP, on the other hand, since it has been geared towards web development since inception, has this built-in.  If you read the PHP source, you will see that this is a core language feature and is built directly into the interpreter.

To be clear, this is a little unusual.  Normally, languages do not make any special accomodations for web requests, and instead will rely on a particular library  to handle the requests and handle the input values from GET, POST, cookies, and others.

### But, some developers dislike it...

Superglobals are a source of contention with some PHP developers.  

A fair number of PHP developers dislike them.  If you use frameworks such as Symfony, Laravel or Zend/Laminas, you will see a lot of work is done within these frameworks to actually hide the fact these superglobals exist, and to steer you away from using them.  Instead, they will want you to use a special object or function to read web-request values.

The source of contention is pretty straight-forward, though:

  - Programmers don't like global variables as they can sometimes make things overly complicated, and it is easy to make mistakes when dealing with them.  These are not only globals, they are super-globals.  So, programmers super-hate it for that reason.

  - Related to the above, it's possible to modify `$_GET`, `$_POST`, etc. and cause an infinite amount of confusion for other developers.  These values should be immutable, but they are not.

  - The internal PHP Core developers dislike them as they have caused some language features to be either much slower than necessary (i.e., they would be able to implement some features in a much more performant way if they did not exist), or very difficult to implement at all.

  - `$_REQUEST`, in particular, is problematic and can cause security issues and bugs in poorly written code.  For this reason, it's advised to NOT use `$_REQUEST`, in particular, and to re-write code that uses it.  The issue arrises from, for example, if we check `$_REQUEST['foo']`, to mean we want to check for a `foo` named value in GET/POST, this value could also be present through cookies, since `$_REQUEST` MAY combine GET, POST, or cookies.  This means we may check for value `foo`, expect it through GET/POST, and get an unexpected value through cookies, or vice-versa.  There is also a `request_order` setting now which means `$_REQUEST` is installation-dependant, making things even more complicated, and more reason to stay away from `$_REQUEST`.
  
  - They are related to a now long-removed feature in PHP called `register_globals`.  Basically, in older versions of PHP it was common to, instead of accessing GET values via e.x. `$_GET['foo']`, it would instead be accessible via a global variable called `$foo`.  This caused a lot of security issues in poorly written scripts, and made it significantly easier to introduce bugs and security exploits within PHP code.  It genuinely wasn't a great idea, and thus has been long removed. 

### What to use

Unless your library/framework has something specific to it that is an improvement, however, generally you shouldn't feel wrong using `$_GET`, `$_POST`, `$_COOKIE`, `$_FILES`, or `$_ENV`.  If you wish, you can use `getenv()` over `$_ENV`, but for cookies, and GET/POST and file (multipart-form) data, it is generally the only way.

You CAN read the raw POST data using some various techniques, and some frameworks actually do this, not using super-globals at all.  However, I do know at least Symfony and Laminas (Zend) use the super-globals.
