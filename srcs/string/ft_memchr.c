#include "libftv2/incs/string/ft_memchr.h"

void* ft_memchr(const void* s, int c, size_t n) {
    assert(s != NULL);

    unsigned char* src = (unsigned char*)s;
    size_t i = 0;

    while (i < n) {
        if (src[i] == (unsigned char)c)
            return src + i;
        i++;
    }
    return NULL;
}
