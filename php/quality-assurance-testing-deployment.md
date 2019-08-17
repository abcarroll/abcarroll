# Quality Assurance, Testing & Deployment

## Tools

 - [phpro/grumphp] is a great place to start, as a tool itself and as a list of tools available.
 - [EdgedesignCZ/phpqa] is similar to grum and similarly aggreagtes a large number of tools into effectively a local
 pipeline on your workstation.
  - [edmondscommerce/phpqa] is yet another.
 - [phpqa.io](https://phpqa.io/) is a meta-list of Q&A libraries (not curated by me).
 - "Awesome PHP" list in cookbook has it's own list
 
[phpro/grumphp]: https://github.com/phpro/grumphp
[EdgedesignCZ/phpqa]: https://github.com/EdgedesignCZ/phpqa
[edmondscommerce/phpqa]: https://github.com/edmondscommerce/phpqa

### Browser Testing Quickstart

See [PHP.Testing.md](PHP.Testing.md) for more in-depth about testing in general.  See https://www.google.com/linuxrepositories/ if you wish to verify the key below yourself.

**Note! This is using commercial, non-open-source Google Chrome!**

    echo 'deb [arch=amd64] http://dl.google.com/linux/chrome/deb/ stable main' | sudo tee -a /etc/apt/sources.list.d/google-chrome.list
    wget -q -O - https://dl.google.com/linux/linux_signing_key.pub | sudo apt-key add -
    sudo apt-get update; sudo apt-get install google-chrome
 

#### PHP Githooks

 - https://github.com/niden/git-php-syntax-checker Old/Unmaintained project but very simple quickstart for githooks.
 - https://gist.github.com/cillosis/6370801 Another simple githook written in php

@TODO more to come

---
(C) Copyright 2019 A.B. Carroll (http://github.com/abcarroll/abcarroll)  \
See [meta/META.md](meta/META.md) for full use, licensing, and copyright details.