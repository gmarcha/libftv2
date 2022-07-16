#include "libftv2/incs/string/ft_strmapi.h"

#include <assert.h>
#include <stdlib.h>

#include "libftv2/incs/string/ft_strlen.h"

char* ft_strmapi(const char* s, char (*f)(unsigned int, char)) {
    char* str = (char *)malloc(ft_strlen(s) + 1);
    if (str == NULL)
        return NULL;
    size_t i = 0;
    while (s[i]) {
        str[i] = f((unsigned int)i, s[i]);
        i++;
    }
    str[i] = '\0';
    return str;
}
