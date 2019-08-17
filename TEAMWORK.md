# Teamwork!

Not talking about some software called `teaamwork` here.  This is all about real life person to person software/product 
development, commercially and non commercially.

## Git 

### Git and Designers

Git can be hard to use --- even for people that are already technically adept.  See [The art of patience: Why you should bother teaching Git to designers](https://www.youtube.com/watch?v=4S3h5L21KlA)
from Git Merge 2019 by Belén Barros Pena for how to deal with git for less technically adept.

### Takeaways from The art of patience: Why you should bother teaching Git to designers

1. Teach git on a need to know basis.  
2. Avoid the Git jargon.
3. Don't bother too much with the concepts.
4. Do things **with** - never **for** - your designers.
5. Designers should take notes and keep a cheat sheet.

### Bottom Line

Bottom line: There is no reason you should NEED to:
 
 - over-engineer: spend time automating technical feats, eg. push-button git, automating setup.  only do this if the motivation is true automation reasons 
 (deployment pipelines, very large number of staff with in-office workstations)
 - over-pay/use hosted solutions: spend large sums of money for commercial SaaS solutions, or even just for software to be hosted on in-house infrastructure.  you
 will end up needing to provide technical support anyway, and just have a pretty button that breaks instead of a black shell.
 - limit flexibility, use git wrong: it's may be easier for a developer to just use `man git-request-pull(1)`, `man git-send-email(1)`, `man git-mailinfo(1)`
 and so on from a shell, than worry with a web UI that is totally incompatible with the way git was _intended_ to be used.  See [Why Git is Broke][2] for more
 on this.  Additionally, remote hosting may add serious barriers to integration and deployment systems.
 
There is nothing wrong with using a hosting provider (SaaS) if your organization is comfortable with it.  Just understand that none of these services are 
compatible with the simple and reliable system that git was built around: e-mailing patches.

## Bug Management

 - "The traditional bug triage process is miserably inefficient."

The below is taken from [LostGarden: Improving Bug Triage with User Pain][1], re-formatted with additional notes and explanation from A.B. Carroll.  **Please
refer to the original article, as it is much more in depth.  This is a cheat sheet/overview of it.**

[1]: http://www.lostgarden.com/2008/05/improving-bug-triage-with-user-pain.html

### Generate a score
 
1. Rank each bug on several criteria
2. Combine those criteria into a single score called User Pain
3. Sort all bugs by User Pain into a public list
4. Start fixing the most painful bugs at the top of the list.

### Criteria for Score

 - Type: What type of bug is this? For example is it a crashing issue, a problem with localization or a matter of visual polish?

   - 7: Crash: Bug causes crash or data loss. Asserts* in the Debug release. (*Failures of pre-made tests)
   - 6: Major usability: Impairs usability in key scenarios. (Cannot add a new product, or new product for e-commerce SaaS)
   - 5: Minor usability: Impairs usability in secondary scenarios. (Cannot )
   - 4: Balancing: Enables degenerate usage strategies that harm the experience.
   - 3: Visual and Sound Polish: Aesthetic issues (Design)
   - 2: Localization:
   - 1: Documentation: A documentation issue

 - Likelihood: How likely are users to experience (or feel) the bug? For example, does everyone run into the issue or do only a few users run into it?
 
   - 5: Will affect all users.
   - 4: Will affect most users.
   - 3: Will affect average number of users.
   - 2: Will only affect a few users.
   - 1: Will affect almost no one.

 - Priority: Of the people who experience the bug, how badly does it affect their experience with the product?

   - 5: Blocking further progress on the daily build.
   - 4: A User would return the product. Cannot RTM. The Team would hold the release for this bug.
   - 3: A User would likely not purchase the product. Will show up in review. Clearly a noticeable issue.
   - 2: A Pain – users won’t like this once they notice it. A moderate number of users won’t buy.
   - 1: Nuisance – not a big deal but noticeable. Extremely unlikely to affect sales.
 

---
(C) Copyright 2019 A.B. Carroll (http://github.com/abcarroll/abcarroll)  \
See [meta/META.md](meta/META.md) for full use, licensing, and copyright details.