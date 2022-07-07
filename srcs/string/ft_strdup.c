#include "incs/string/ft_strdup.h"

char* ft_strdup(const char* s) {
    assert(s != NULL);

    char* d = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (d == NULL)
        return NULL;
    ft_strcpy(d, s);
    return d;
}
