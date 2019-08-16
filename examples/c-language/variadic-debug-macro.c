//
// Originally from `dorp` on Freenode IRC, ##C
// Original Link: http://codepad.org/WhcZbQGd
//
// LICENSE: meta/Code.License.Public.txt
//

#include <stdio.h>
#include <stdlib.h>

#define debug1(arg) printf("Debug: " arg "\n")
#define debug2(arg, ...) printf("Debug: " arg "\n", __VA_ARGS__ )
#define debug_vn(v1, v2, v3, vn, ...) vn

// Note here that the first argument is __VA_ARGS__ which will fill up the
// first N slots that were passed.
#define debug(...) debug_vn(__VA_ARGS__,       \
                   debug2(__VA_ARGS__),        \
                   debug2(__VA_ARGS__),        \
                   debug1(__VA_ARGS__), 0)

int main(void) {
    debug();
    debug("");
    debug("It is and it isn't.");
    debug("It's: %d, %s", 1, "One");

    return 0;
}