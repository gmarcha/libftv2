#include "libftv2/incs/string/ft_split.h"

#include <assert.h>
#include <stdlib.h>

static void* ft_free_split(char** strs, size_t size) {
    while (size--)
        free(strs[size]);
    free(strs);
    return NULL;
}

static size_t count_words(const char* str, char sep) {
    size_t i = 0, count = 0;
    while (str[i]) {
        while (str[i] && str[i] == sep)
            i++;
        if (str[i] && str[i] != sep)
            count++;
        while (str[i] && str[i] != sep)
            i++;
    }
    return count;
}

static char* allocate_string(const char* s, char c) {
    size_t len = 0;
    while (s[len] && s[len] != c)
        len++;
    char* str = malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return NULL;
    return str;
}

static char** split_words(const char* s, char c, char** strs, size_t len) {
    size_t i = 0;
    while (i < len) {
        while (*s && *s == c)
            s++;
        strs[i] = allocate_string(s, c);
        if (strs[i] == NULL)
            return ft_free_split(strs, i);
        size_t j = 0;
        while (*s && *s != c)
            strs[i][j++] = *s++;
        strs[i++][j] = '\0';
    }
    strs[i] = NULL;
    return strs;
}

char** ft_split(const char* s, char c) {
    assert(s != NULL);

    size_t len = count_words(s, c);
    char** strs = malloc(sizeof(char *) * (len + 1));
    if (strs == NULL)
        return NULL;
    if (split_words(s, c, strs, len) == NULL)
        return NULL;
    return strs;
}
