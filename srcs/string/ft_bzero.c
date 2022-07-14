#include "libftv2/incs/string/ft_bzero.h"

#include <assert.h>

#include "libftv2/incs/string/ft_memset.h"

void ft_bzero(void* s, size_t n) {
    assert(s != NULL);
    ft_memset(s, 0, n);
}
