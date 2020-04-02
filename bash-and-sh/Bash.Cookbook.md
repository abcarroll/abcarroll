# A.B.'s Bash Cookbook (Interactive Use)

This is for interactive bash use – eg. using it _as a shell_.  For programming, see [Shell Scripting](Shell.Scripting.md).

## Quick Search Through Manual

You'll need `rg` or ripgrep first (you NEED it anyway):

```
sudo apt-get install ripgrep
rg -C 3 -i --no-ignore --no-ignore-global --no-ignore-parent --no-ignore-vcs --pre mandoc '\b$TERM\b' /usr/share/man/man*
```

Or, for just a generally quick search **into** files:
```
rg -C 3 -i --no-ignore --no-ignore-global --no-ignore-parent --no-ignore-vcs <TERM> <PATH>
```

For a fast search that replaces `find`, there is `fd`, -- I am not sure if there is a normal Debian package for it, .. however it is on the Rust Language cargo site.



## !foo to run foo again

You can use `!nameofcmd` to re-invoke `nameofcmd` using the same arguments as the last invokation. 

```bash
vim /some/long/path
cd
!vim
```

## `!!` invokes last command

Instead of tapping `up-arrow` + `<RETURN>`, just `!!`.

```bash
ps aux 
!!
```

## Use `fuck` or `please`

Depending on how you feel about things, or your mood… I setup both as aliases:

```bash
alias please='sudo $(history -p \!\!)'
alias fuck='sudo $(history -p \!\!)'
```

Now, the ninety times per day you forget to prefix with `sudo`:

```text
;$ ab@tower; ~; 1; 10355
; vipw 
bash: vipw: command not found

;$ ab@tower; ~; 1; 10355
; please
vipw: /etc/passwd is unchanged
```

