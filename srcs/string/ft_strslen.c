#include "libftv2/incs/string/ft_strslen.h"

#include <assert.h>

size_t ft_strslen(const char** strs) {
    assert(strs != NULL);

    size_t i = 0;
    while (strs[i])
        i++;
    return i;
}
