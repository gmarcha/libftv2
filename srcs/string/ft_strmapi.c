#include "libftv2/incs/string/ft_strmapi.h"

char* ft_strmapi(const char* s, char (*f)(unsigned int, char)) {
    char* str = (char *)malloc(ft_strlen(s) + 1);
    if (str == NULL)
        return NULL;
    size_t i = -1;
    while (s[++i])
        str[i] = f(i, s[i]);
    str[i] = '\0';
    return str;
}
