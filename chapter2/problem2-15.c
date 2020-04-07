#include <stdio.h>

/* Using only bit-level and logical operations, write a C expression that is
 equivalent to x == y. In other words, it will return 1 when x and y are equal
 and 0 otherwise. */

int equal(int x, int y) {
    // a ^ a = 0
    return !(x ^ y);
}

int main() {
    int a = 5;

    printf("%d\n", equal(a, a));
}
