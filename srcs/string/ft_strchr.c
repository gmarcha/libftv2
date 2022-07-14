#include "libftv2/incs/string/ft_strchr.h"

char* ft_strchr(const char* s, int c) {
    assert(s != NULL);

    size_t i = -1;
    while (s[++i])
        if (s[i] == (unsigned char)c)
            return (char *)s + i;
    if (s[i] == (unsigned char)c)
        return (char *)s + i;
    return NULL;
}
