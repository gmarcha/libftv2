#include "incs/string/ft_memmove.h"

void* ft_memmove(void* dest, const void* src, size_t n)
{
    assert(dest != NULL);
    assert(src != NULL);

    unsigned char* d = (unsigned char*)dest;
    unsigned char* s = (unsigned char*)src;

    if (dest < src)
        ft_memcpy(dest, src, n);
    else
        while (n--)
            d[n] = s[n];
    return dest;
}
