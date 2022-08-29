/* this .c file only is an example how to use this header file. Download only the os.h file. */
#include "os.h"
#include <stdio.h>

int main(void) {
    System os = GetOS();
    printf("You're on %s!", os);
    return 0;
}
