#include "libftv2/incs/string/ft_strdup.h"

#include <assert.h>
#include <stdlib.h>

#include "libftv2/incs/string/ft_strlen.h"
#include "libftv2/incs/string/ft_strcpy.h"

char* ft_strdup(const char* s) {
    assert(s != NULL);

    char* d = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (d == NULL)
        return NULL;
    ft_strcpy(d, s);
    return d;
}
