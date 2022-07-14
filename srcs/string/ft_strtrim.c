#include "libftv2/incs/string/ft_strtrim.h"

#include <assert.h>
#include <stdlib.h>

#include "libftv2/incs/char/ft_ischarset.h"
#include "libftv2/incs/string/ft_strlen.h"
#include "libftv2/incs/string/ft_strndup.h"

static size_t getStart(char const* s, char const* set) {

    size_t start = 0;
    while (s[start] && ft_ischarset(s[start], set))
        start++;
    return start;
}

static size_t getEnd(char const* s, char const* set, size_t start) {

    size_t end = ft_strlen(s);
    while (start < end && ft_ischarset(s[end - 1], set))
        end--;
    return end;
}

char* ft_strtrim(char const* s, char const* set) {
    assert(s != NULL);
    assert(set != NULL);

    const size_t start = getStart(s, set);
    const size_t end = getEnd(s, set, start);
    return ft_strndup(s + start, end - start);
}
