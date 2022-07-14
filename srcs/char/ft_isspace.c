#include "libftv2/incs/char/ft_isspace.h"

int ft_isspace(int c) {
    return c == ' ' || (c >= 9 && c <= 13);
}
