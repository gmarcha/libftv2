#include "libftv2/incs/string/ft_strchr.h"

#include <assert.h>
#include <stddef.h>

char* ft_strchr(const char* s, int c) {
    assert(s != NULL);

    size_t i = 0;
    while (s[i]) {
        if (s[i] == (unsigned char)c)
            return (char *)s + i;
        i++;
    }
    if (s[i] == (unsigned char)c)
        return (char *)s + i;
    return NULL;
}
