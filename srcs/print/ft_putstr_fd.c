#include "incs/print/ft_putstr_fd.h"

void ft_putstr_fd(int fd, const char* s) {
    assert(s != NULL);
    write(fd, s, ft_strlen(s));
}
