# Programming Design Patterns

This is an entire page dedicated to only (mostly language-agnostic)
structural design patterns.

Instead of linking them, ... I actually just made it easier for myself 
and added them as git submodules.

If you're using this on github, then should be able to just click them. 
If you've cloned the repo, then you should be able to:

```sh
git submodule update
```

And the code just be added.  If for some reason things are missing, etc.
then the contents of gitmodules is:

```text
[submodule "design-patterns/php-example/ehsangazar.design-patterns-php"]
	path = design-patterns/php-example/ehsangazar.design-patterns-php
	url = https://github.com/ehsangazar/design-patterns-php
[submodule "design-patterns/php-example/domnikl.DesignPatternsPHP"]
	path = design-patterns/php-example/domnikl.DesignPatternsPHP
	url = https://github.com/domnikl/DesignPatternsPHP.git
[submodule "design-patterns/php-example/RefactoringGuru.design-patterns-php"]
	path = design-patterns/php-example/RefactoringGuru.design-patterns-php
	url = https://github.com/RefactoringGuru/design-patterns-php
[submodule "design-patterns/php-example/kamranahmedse/design-patterns-for-humans"]
	path = design-patterns/php-example/kamranahmedse/design-patterns-for-humans
	url = https://github.com/kamranahmedse/design-patterns-for-humans.git
[submodule "design-patterns/php-example/yidas/.php-design-patterns"]
	path = design-patterns/php-example/yidas/.php-design-patterns
	url = https://github.com/yidas/php-design-patterns.git
[submodule "design-patterns/php-example/yidas.php-design-patterns"]
	path = design-patterns/php-example/yidas.php-design-patterns
	url = https://github.com/yidas/php-design-patterns.git
```
