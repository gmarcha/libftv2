#include "libftv2/incs/char/ft_toupper.h"

int ft_toupper(int c) {
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}
