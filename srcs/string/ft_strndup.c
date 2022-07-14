#include "libftv2/incs/string/ft_strndup.h"

#include <assert.h>
#include <stdlib.h>

#include "libftv2/incs/string/ft_strlen.h"
#include "libftv2/incs/string/ft_strlcpy.h"

char* ft_strndup(const char* s, size_t n) {
    assert(s != NULL);

    char* d = malloc(sizeof(char) * (n + 1));
    if (d == NULL)
        return NULL;
    ft_strlcpy(d, s, n + 1);
    return d;
}
