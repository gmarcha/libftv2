#include "libftv2/incs/string/ft_strcpy.h"

#include <assert.h>
#include <stddef.h>

char* ft_strcpy(char* dest, const char* src) {
    assert(dest != NULL);
    assert(src != NULL);

    size_t i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
