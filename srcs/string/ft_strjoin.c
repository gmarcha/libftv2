#include "incs/string/ft_strjoin.h"

char* ft_strjoin(char const* s1, char const* s2) {
    assert(s1 != NULL);
    assert(s2 != NULL);

    const size_t s1Len = ft_strlen(s1);
    const size_t s2Len = ft_strlen(s2);
    char* str = malloc(sizeof(char) * (s1Len + s2Len + 1));
    if (str == NULL)
        return NULL;
    ft_strcpy(str, s1);
    ft_strcpy(str + s1Len, s2);
    return str;
}
