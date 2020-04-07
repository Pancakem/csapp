#include "helper.h"
#include <string.h>

void show_string(const char* str) {
    show_bytes((byte_pointer) str, strlen(str));
}


int main() {
    const char *m = "mnopqr";
    // this prints  6d 6e 6f 70 71 72 because strlen doesn't count the null char at the end of c strings
    show_string(m);
}
