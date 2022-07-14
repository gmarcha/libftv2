#include "libftv2/incs/char/ft_isalnum.h"

#include "libftv2/incs/char/ft_isalpha.h"
#include "libftv2/incs/char/ft_isdigit.h"

int ft_isalnum(int c) {
    return ft_isdigit(c) || ft_isalpha(c);
}
