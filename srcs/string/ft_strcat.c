#include "libftv2/incs/string/ft_strcat.h"

char* ft_strcat(char* dest, const char* src) {
    assert(dest != NULL);
    assert(src != NULL);

    size_t len = ft_strlen(dest);
    size_t i = 0;
    while (src[i]) {
        dest[i + len] = src[i];
        i++;
    }
    dest[i + len] = '\0';
    return dest;
}
