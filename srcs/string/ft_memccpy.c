#include "libftv2/incs/string/ft_memccpy.h"

#include <assert.h>

void* ft_memccpy(void* dest, const void* src, int c, size_t n) {
    assert(dest != NULL);
    assert(src != NULL);

    unsigned char* d = (unsigned char*)dest;
    const unsigned char* s = (const unsigned char*)src;
    size_t i = 0;

    while (i < n) {
        d[i] = s[i];
        if (s[i++] == (unsigned char)c)
            return d + i;
    }
    return 0;
}
