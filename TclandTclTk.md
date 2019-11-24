# tcl/tk code samples & cheatsheet

## Excellent External References 

- [Writing commercial grade multiplatform end-user applications with Tcl/Tk and PowerTcl](http://www.chevreux.org/uploads/media/bach_tclpaper.pdf) by Bastien Chevreux, Christoph G¨othe, Sebastian Liepe

```tcl
puts "There are $argc arguments to this script"
puts "The name of this script is $argv0"
if {$argc > 0} {puts "The other arguments are: $argv" }

puts "You have these environment variables set:"
foreach index [array names env] {
    puts "$index: $env($index)"
}

// puts [lindex] ???
```



