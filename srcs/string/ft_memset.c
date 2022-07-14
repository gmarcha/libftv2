#include "libftv2/incs/string/ft_memset.h"

void* ft_memset(void* s, int c, size_t n) {
    assert(s != NULL);

    unsigned char* src = (unsigned char*)s;

    while (n--)
        src[n] = c;
    return s;
}
