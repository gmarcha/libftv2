#include "libftv2/incs/string/ft_memchr.h"

#include <assert.h>

const void* ft_memchr(const void* s, int c, size_t n) {
    assert(s != NULL);

    const unsigned char* src = (const unsigned char*)s;
    size_t i = 0;

    while (i < n) {
        if (src[i] == (unsigned char)c)
            return src + i;
        i++;
    }
    return NULL;
}
