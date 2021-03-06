#include "libftv2/incs/print/ft_putnbr_fd.h"

#ifdef _WIN32
    #include <io.h>
#else
    #include <unistd.h>
#endif

void ft_putnbr_fd(int fd, int n) {
    unsigned int nb = (unsigned int)n;
    if (n < 0) {
        nb = (unsigned int)-n;
        write(fd, "-", 1);
    }
    if (nb >= 10)
        ft_putnbr_fd((int)nb / 10, fd);
    write(fd, &"0123456789"[nb % 10], 1);
}
