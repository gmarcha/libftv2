#include "libftv2/incs/print/ft_putchar_fd.h"

#ifdef _WIN32
    #include <io.h>
#else
    #include <unistd.h>
#endif

void ft_putchar_fd(int fd, char c) {
    write(fd, &c, 1);
}
