#include "libftv2/incs/number/ft_nbrlen_base.h"

size_t ft_nbrlen_base(int n, size_t len_base) {
    size_t len = 0;
    if (n <= 0)
        len++;
    while (n) {
        n /= (int)len_base;
        len++;
    }
    return (len);
}
