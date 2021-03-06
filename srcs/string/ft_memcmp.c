#include "libftv2/incs/string/ft_memcmp.h"

#include <assert.h>

int ft_memcmp(const void* s1, const void* s2, size_t n) {
    assert(s1 != NULL);
    assert(s2 != NULL);

    const unsigned char* str1 = (const unsigned char*)s1;
    const unsigned char* str2 = (const unsigned char*)s2;
    size_t i = 0;

    while (i < n) {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return 0;
}
