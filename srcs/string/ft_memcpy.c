#include "libftv2/incs/string/ft_memcpy.h"

#include <assert.h>

void* ft_memcpy(void* dest, const void* src, size_t n) {
    assert(dest != NULL);
    assert(src != NULL);

    unsigned char* d = (unsigned char*)dest;
    const unsigned char* s = (const unsigned char*)src;
    size_t i = 0;

    while (i < n) {
        d[i] = s[i];
        i++;
    }
    return dest;
}
