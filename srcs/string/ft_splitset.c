#include "libftv2/incs/string/ft_splitset.h"

#include <assert.h>
#include <stdlib.h>

#include "libftv2/incs/char/ft_ischarset.h"
#include "libftv2/incs/string/ft_strclen.h"
#include "libftv2/incs/string/ft_strlcpy.h"

static void* ft_free_split(char** strs, size_t size) {
    while (size--)
        free(strs[size]);
    free(strs);
    return NULL;
}

static size_t count_word(const char* str, const char* charset)
{
    size_t count = 0;
    if (*str) {
        if (!ft_ischarset(*str, charset))
            count++;
        size_t i = 0;
        while (str[++i])
            if (ft_ischarset(str[i - 1], charset)
                && !ft_ischarset(str[i], charset))
                count++;
    }
    return count;
}

static char* get_word(const char** str, const char* charset) {
    while (**str && ft_ischarset(**str, charset))
        (*str)++;
    size_t len = ft_strclen(*str, charset);
    char* word = (char *)malloc(len + 1);
    if (word == NULL)
        return NULL;
    ft_strlcpy(word, *str, len + 1);
    *str += len;
    return word;
}

char** ft_splitset(const char* s, const char* set) {
    assert(s != NULL);
    assert(set != NULL);

    size_t len = count_word(s, set);
    char** strs = (char **)malloc(sizeof(char *) * (len + 1));
    if (strs == NULL)
        return NULL;
    size_t i = 0;
    while (i < len) {
        strs[i] = get_word(&s, set);
        if (strs[i] == 0)
            return (ft_free_split(strs, i));
        i++;
    }
    strs[i] = 0;
    return (strs);
}
