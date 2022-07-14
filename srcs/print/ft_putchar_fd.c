#include "libftv2/incs/print/ft_putchar_fd.h"

void ft_putchar_fd(int fd, char c) {
    write(fd, &c, 1);
}
