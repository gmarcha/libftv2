#include "incs/string/ft_substr.h"

char* ft_substr(char const* s, unsigned int start, size_t len) {
    assert(s != NULL);
    return ft_strndup(s + start, len);
}
