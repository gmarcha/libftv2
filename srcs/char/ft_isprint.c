#include "libftv2/incs/char/ft_isprint.h"

int ft_isprint(int c) {
    return c >= ' ' && c <= '~';
}
