#include "libftv2/incs/print/ft_putnbr_fd.h"

void ft_putnbr_fd(int fd, int n) {
    unsigned int nb = n;
    if (n < 0)
        nb = -n;
    if (n < 0)
        write(fd, "-", 1);
    if (nb >= 10)
        ft_putnbr_fd(nb / 10, fd);
    write(fd, &"0123456789"[nb % 10], 1);
}
