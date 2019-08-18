# PHP and Git

 - **For Deployment**, see the [quality assurance, testing, and deployment] with 
 PHP page.  But while you are here, you may want to check out [markomarkovic/simple-php-git-deploy]
 which while a little dated should likely still be solid and has many forks.
 
 - **For Deployment**, [banago/PHPloy][8] is the most popular PHP/git/sftp tool.  I didn't say it was
 the best.  I did not dig into it yet.  I just said it was the most popular.

 - For actually controlling git, unfortunately [kbjr/Git.php][9]
 seems to be the best tool out there.  It uses `proc_open` instead of a real library
 and doesn't have type safety.  However, at the moment it appears to be what you need
 to be using.

 - There is [libgit2/php-git] which is an out-of-date C extension.  
 
 - [patrikf/glip]  which is a abandoned "pure php" implementation of reading git
 packfiles and indices.  I would not trust it with anything critical or not backed up:
 
 - [sebastianbergmann/git][5] which is abandoned and should not be used, it does
 escape things properly but don't even use this as a base, use `symfony/process`.
 
 - [sebastianbergmann/version][7] from the same individual as above is an 
 interesting take on versioning using git.  I did not look if he is cleanly using processes, though.
 
 - [Sami's GitVersionCollection][6] shows how simple it can be to run simple git
 commands from php if you are fine relying on the `git` binary being present on the system.
 
[markomarkovic/simple-php-git-deploy]: https://github.com/markomarkovic/simple-php-git-deploy
[libgit2/php-git]: https://github.com/libgit2/php-git
[patrikf/glip]: https://github.com/patrikf/glip/
[quality assurance, testing, and deployment]: quality-assurance-testing-deployment.md
[5]: https://github.com/sebastianbergmann/git
[6]: https://github.com/FriendsOfPHP/Sami/blob/13f9f53d433124a5e61bfb89430a92e5faf4d93f/Sami/Version/GitVersionCollection.php
[7]: https://github.com/sebastianbergmann/version
[8]: https://github.com/banago/PHPloy
[9]: https://github.com/kbjr/Git.php]


@TODO The reference links are inconsistent.
@TODO clean this page up