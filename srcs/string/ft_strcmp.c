#include "libftv2/incs/string/ft_strcmp.h"

#include <assert.h>
#include <stddef.h>

int ft_strcmp(const char* s1, const char* s2) {
    assert(s1 != NULL);
    assert(s2 != NULL);

    size_t i = 0;
    while (s1[i] || s2[i]) {
        if (s1[i] != s2[i])
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        i++;
    }
    return 0;
}
