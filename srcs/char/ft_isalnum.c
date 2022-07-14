#include "libftv2/incs/char/ft_isalnum.h"

int ft_isalnum(int c) {
    return ft_isdigit(c) || ft_isalpha(c);
}
