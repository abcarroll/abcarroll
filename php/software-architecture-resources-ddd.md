# Software Design & Architecture

## General

- [SourceMaking.com - Design Patterns, Domain Design](https://sourcemaking.com/) - Very large resource
- [Martin Fowler - Video - Software Design in the 21st Century](https://www.thoughtworks.com/talks/software-development-21st-century-xconf-europe-2014)

### Domain-Driven Design

- DDDinPHP:
  - **[PHP Friends of DDD: State of the Union -- *Very* large list of additional resources](https://github.com/PhpFriendsOfDdd/state-of-the-union)**
  - [DDDinPHP on Github](https://github.com/dddinphp)
  - [DDDinPHP Google Group](https://groups.google.com/forum/#!forum/dddinphp)
- Reference:
  - [MartinFowler.com - Bounded Context](https://martinfowler.com/bliki/BoundedContext.html)
  - [MartinFowler.com - Ubiquitous Language](https://martinfowler.com/bliki/UbiquitousLanguage.html)
- Videos:
  - [Ma:hias Verraes - PHP UK Conference 2014 - Unbreakable Domain Models](https://www.youtube.com/watch?v=ZJ63ltuwMaE&feature=youtu.be)
  - [Mathias Verraes - Decoupling the Model from the Framework at Laracon EU 2014](https://www.youtube.com/watch?v=QaIGN_cTcc8)
- Books:
  - [Vaughn Vernon - Implementing Domain-Driven Design, 1st Edition(via Amazon)](https://www.amazon.com/Implementing-Domain-Driven-Design-Vaughn-Vernon/dp/0321834577)
  - [Carlos Buenosvinos - Domain-Driven Design in PHP](https://leanpub.com/ddd-in-php) (See below for example repositories & other corresponding resources)
- Example Repositories:
  - [github: garethp/hexagonal-ddd: a sample todo app](https://github.com/Garethp/hexagonal-ddd)
  - [webdevilepers: ddd repositories with doctrine orm/odm in symfony](http://blog.webdevilopers.net/domain-driven-design-repositories-with-doctrine-orm-and-odm-in-symfony/)
- Quotes & Notes:
  - "In essence the problem with anemic domain models is that they incur all of the costs of a domain model, without yielding any of the benefits." - Martin Fowler
  - "Use objects as consistency boundaries." - Mathias Verraes (Unbreakable Domain Models)
  - "If multiple rules can apply to an object, there are in different contexts." - Mathias Verraes (Unbreakable Domain Models)
  - "DRY is not about code duplication, but a single source of truth" - Mathias Verraes
  - "Commands" in the service layer are typically use-cases

### Hexagonal Architecture

- Reference:
  - [(Ref)     Alistair Cockburn's Reference on Hexagonal Architecture](http://alistair.cockburn.us/Hexagonal+architecture)
  - [(Article) Medium.com - Domain Models that are 100% ignorant of persistence and ORM unaware](https://medium.com/@johnkevinmbasco/domain-models-that-are-100-ignorant-of-persistence-and-orm-unaware-d8f7a8253c7b#.6yorklut1)
    - [Relevant Reddit Post: Domain Modles that are 100% ignorant of the persistence and ORM unaware](https://www.reddit.com/r/PHP/comments/4cj034/hexagonal_architecture_domain_models_that_are_100/)
  - [Carlos Buenosvinos - Slides - Hexagonal Architecture - PHP Barcelona Monthly Talk (DDD) by Carlos Buenosvinos](https://www.slideshare.net/carlosbuenosvinos/hexagonal-architecture-php-barcelona?next_slideshow=1) (Where is the actual talk?)
  - [Chris Fidao - Fideloper - Hexagonal Architecture](http://fideloper.com/hexagonal-architecture)
    - [Chris Fidao - Reddit Thread of his Fideloper.com Article Post](https://www.reddit.com/r/PHP/comments/29bprf/hexagonal_architecture/)
- Videos:
  - [Chris Fidao - Talk on Hexagonal Architecture](https://www.youtube.com/watch?v=6SBjKOwVq0o) (Corresponds to above Reference)
  - [Talk - DrupalCon Amsterdam 2014: Models & Service Layers; Hemoglobin & Hobgoblins](http://www.youtube.com/watch?v=ajhqScWECMo&t=1519s)
- Example Repositories:
  - [Chris Fidao - Fideveloper.com - github: fideveloper/hexagonal-php](https://github.com/fideloper/hexagonal-php)
  - [Carlos Buenosvinos - github: carlosbuenosvinos/phparchitect-hexagonal-architecture-article](https://github.com/carlosbuenosvinos/phparchitect-hexagonal-architecture-article) (Corresponds to slides above)
    - [Small article on magazine publishing regarding above](https://carlosbuenosvinos.com/hexagonal-architecture-with-php-was-published-in-phparch-magazine/) (Would love to get a hold of the magazine article which can be bought [here](https://www.phparch.com/magazine/2014-2/july/))
  - [Garethp/hexagonal-ddd: Todo App](https://github.com/Garethp/hexagonal-ddd)
  - [pvgomes/symfony2biso: Symfony2 Using 'Business Isolation Layer'](https://github.com/pvgomes/symfony2biso)
  - [igorw/doucheswag: auction sample application](https://github.com/igorw/doucheswag) (2013)
  - [DDDinPHP Post: "Sample/demo app list"](https://groups.google.com/forum/#!topic/dddinphp/5zxdH8uIScg)
  - [Symfony Todo App](https://gitlab.com/martinpham/symfony_hexagonal_todo)
    - [Relevant Reddit Post: My very first attempt to Hexagonal Architecture ...](https://www.reddit.com/r/PHP/comments/5lbesw/my_very_first_attempt_to_hexagonal_architect/)
    - [github: gnugat-examples/fortune: a fortune app](https://github.com/gnugat-examples/fortune/tree/api-example)
- Quotes & Notes:
  - The interface is the port, and the implementations of it are the adapters to that port.
  - "Hexagonal Architecture espouses a one-way flow of dependencies: From the outside, in. The Domain Layer (the inner-most layer) should not depend on layers outside of it." -  Chris Fidao
  - "At the boundary of our Domain Layer, we find definitions in how the outside layer (the Application Layer) can communicate with the domain objects/entities found in the Domain Layer." - Chris Fidao
  - "A way to decouple your code in different layers -- a way to encapsulate variances -- a way to encapsulate what changes in your code" - Chris Fidao

### CQRS

- Resources
  - [C# Code of 'Original' Implementation](https://github.com/gregoryyoung/m-r/blob/master/SimpleCQRS/Events.cs)
  - [The "Light" Implementation](https://github.com/beberlei/litecqrs-php/blob/master/example/example2_event.php)

### Microservices

- Video Talks
  - [Martin Fowler - Microservices](https://martinfowler.com/articles/microservices.html)
- Quotes & Notes
  - "In short, the microservice architectural style is an approach to developing a single application as a suite of small services, each running in its own process and communicating with lightweight mechanisms, often an HTTP resource API." - Martin Fowler
  - "The microservice approach to division is different, splitting up into services organized around business capability." - Martin Fowler
  - "The microservice community favours an alternative approach: smart endpoints and dumb pipes. Applications built from microservices aim to be as decoupled and as cohesive as possible - they own their own domain logic" - Martin Fowler
  - Hexagonal Layers, according to Chris Fidao
    - Domain (center) -> Application -> Framework -> Infrastructure -> Persistence

### BDD (Behaviour Driven Development)

- Resources
  - [PHPspec Introduction](http://www.phpspec.net/en/stable/manual/introduction.html)

### MVC / MVVM

- Resources:
  - [Tom Butler/j.re - Model-View-Confusion - Part 1 - The View gets its own data from the model](https://r.je/view-helpers.html)
  - [Tom Butler/j.re - Model-View-Confusion - Part 2 - MVC Models are not Domain Models](https://r.je/view-helpers.html)
  - [Tom Butler/j.re - MVVM, MVC it's all just roman numerals to me](https://r.je/evolving-mvc-into-mvvm.html)
  - [Tom Butler/j.re - MVVM in PHP Example Series, Part 1 of 4](https://r.je/mvc-in-php.html) (See site for other 3 parts)

### Misc

- Resources:
  - [Object-Relational Mapping is the Vietnam of Computer Science](http://blogs.tedneward.com/post/the-vietnam-of-computer-science/)
  - [Mehdi Khalili - ORM Anti-Patterns, A Series](http://www.mehdi-khalili.com/orm-anti-patterns-series)
  - [Using PDO for Elegant Database Access](http://slashnode.com/pdo-for-elegant-php-database-access/)
  - [Check List for Writing Testable Code, Misko Hevery](http://misko.hevery.com/code-reviewers-guide/)
  - [IcyApril - Refactoring Legacy PHP Projects](https://icyapril.com/programming/php/2016/12/24/refactoring-legacy-php.html)
  - [Five invaluable techniques to improve regex performance](https://www.loggly.com/blog/five-invaluable-techniques-to-improve-regex-performance/)

If you have anything to contribute please submit a pull request.