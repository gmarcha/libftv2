#include "libftv2/incs/string/ft_bzero.h"

void ft_bzero(void* s, size_t n) {
    assert(s != NULL);
    ft_memset(s, 0, n);
}
