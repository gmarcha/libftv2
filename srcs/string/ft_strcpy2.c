#include "libftv2/incs/string/ft_strcpy2.h"

#include <assert.h>

size_t ft_strcpy2(char* dest, const char* src) {
    assert(dest != NULL);
    assert(src != NULL);

    size_t i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return i;
}
