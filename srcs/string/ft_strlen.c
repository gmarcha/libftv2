#include "libftv2/incs/string/ft_strlen.h"

size_t ft_strlen(const char* s) {
    assert(s != NULL);

    size_t i = 0;
    while (s[i])
        i++;
    return i;
}
