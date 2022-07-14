#include "libftv2/incs/string/ft_strncmp.h"

#include <assert.h>

int ft_strncmp(const char* s1, const char* s2, size_t n) {
    assert(s1 != NULL);
    assert(s2 != NULL);

    size_t i = 0;
    while ((s1[i] || s2[i]) && i < n) {
        if (s1[i] != s2[i])
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        i++;
    }
    return 0;
}
