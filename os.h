// this is the main h file. include it, and you're ready-to-go!

#define System char*
#define _WINDOWS "Windows"
#define _LINUX   "Linux"
#define _MACOS   "MacOS"
#define _FREEBSD "FreeBSD"
#define _ANDROID "Android"
#define _AMIGAOS "AmigaOS"
#define _AEGIS   "Apollo AEGIS"
#define _BEOS    "BeOS"
#define _BLUEGENE "Blue Gene"
#define _ERROR NULL


System GetOS(void) {
    #if defined(_WIN32)
          return _WINDOWS;
    #elif defined(__ANDROID__)
          return _ANDROID;
    #elif defined(__FreeBSD__)
          return _FREEBSD;
    #elif defined(__APPLE__)
          return _MACOS;
    #elif defined(__linux__)
          return _LINUX;
    #elif defined(UTS)
          return _AMDAHLUTS;
    #elif defined(AMIGA)
          return _AMIGAOS;
    #elif defined(aegis)
          return _AEGIS;
    #elif defined(__bg__)
          return _BLUEGENE;
    #endif
    return _ERROR;
}
