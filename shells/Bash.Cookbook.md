# A.B.'s Bash Cookbook (Interactive Use)

This is for interactive bash use – eg. using it _as a shell_.  For programming, see [Shell Scripting](Shell.Scripting.md).

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

