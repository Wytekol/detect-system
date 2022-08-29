/* this .c file only is an example how to use this header file. Download only the os.h file. */
#include "os.h"
#include <stdio.h>

int main(void) {
    System os = GetOS();
    if (os == WINDOWS) {
        printf("You're on Windows!");
    } else if (os == LINUX) {
        printf("You're on Linux!");
    } else if (os == MACOS) {
        printf("You're on MacOS!");
    } else if (os == FREEBSD) {
        printf("You're on FreeBSD!");
    } else {
        printf("Operating system not found.");
        return -1;
    }
    return 0;
}
