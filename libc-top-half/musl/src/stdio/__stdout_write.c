#include "stdio_impl.h"
#include <sys/ioctl.h>
#ifdef __wasilibc_unmodified_upstream // use isatty rather than manual ioctl
#else
#include <__function___isatty.h>
#endif

