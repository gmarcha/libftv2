#include "incs/string/ft_strndup.h"

char* ft_strndup(const char* s, size_t n) {
    assert(s != NULL);

    char* d = malloc(sizeof(char) * (n + 1));
    if (d == NULL)
        return NULL;
    ft_strlcpy(d, s, n + 1);
    return d;
}
