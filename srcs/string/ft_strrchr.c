#include "libftv2/incs/string/ft_strrchr.h"

#include <assert.h>
#include <stddef.h>

#include "libftv2/incs/string/ft_strlen.h"

const char* ft_strrchr(const char* s, int c) {
    assert(s != NULL);

    size_t n = ft_strlen(s) + 1;
    while (n--)
        if (s[n] == (unsigned char)c)
            return (const char*)s + n;
    return NULL;
}
