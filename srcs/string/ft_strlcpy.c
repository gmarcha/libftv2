#include "libftv2/incs/string/ft_strlcpy.h"

size_t ft_strlcpy(char* dst, const char* src, size_t size) {
    assert(dst != NULL);
    assert(src != NULL);

    size_t i = 0;
    while (src[i] && i + 1 < size) {
        dst[i] = src[i];
        i++;
    }
    if (size)
        dst[i] = '\0';
    return ft_strlen(src);
}
