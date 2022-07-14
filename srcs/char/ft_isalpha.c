#include "libftv2/incs/char/ft_isalpha.h"

#include "libftv2/incs/char/ft_islower.h"
#include "libftv2/incs/char/ft_isupper.h"

int ft_isalpha(int c) {
    return ft_islower(c) || ft_isupper(c);
}
