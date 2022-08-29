// this is the main h file. include it, and you're ready-to-go!

typedef enum System {
    WINDOWS,
    LINUX,
    MACOS,
    FREEBSD,
    ERROR
} System;

System GetOS(void) {
    #if defined(_WIN32)
      return WINDOWS;
    #elif defined(__linux__)
      return LINUX;
    #elif defined(__FreeBSD__)
      return FREEBSD;
    #elif defined(__APPLE__)
      return MACOS;
    #endif
    return ERROR;
}
