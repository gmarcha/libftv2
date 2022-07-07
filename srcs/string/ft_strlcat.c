#include "incs/string/ft_strlcat.h"

size_t ft_strlcat(char* dst, const char* src, size_t size) {
    assert(dst != NULL);
    assert(src != NULL);

    size_t dstLen = ft_strlen(dst);
    size_t i = 0;
    while (src[i] && i + dstLen + 1 < size) {
        dst[i + dstLen] = src[i];
        i++;
    }
    if (size)
        dst[i + dstLen] = '\0';
    if (size <= dstLen)
        return ft_strlen(src) + size;
    return ft_strlen(src) + dstLen;
}
