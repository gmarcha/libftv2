#include "libftv2/incs/number/ft_itoa_base.h"

#include <assert.h>
#include <stdlib.h>

#include "libftv2/incs/number/ft_nbrlen_base.h"

char* ft_itoa_base(int n, const char* base, size_t len_base) {
    assert(base != NULL);

    size_t len = ft_nbrlen_base(n, len_base);
    char* nbr = malloc(sizeof(char) * (len + 1));
    if (nbr == NULL)
        return NULL;
    nbr[len] = '\0';
    unsigned int nb = (unsigned int)n;
    if (n < 0)
        nb = (unsigned int)-n;
    while (len--) {
        nbr[len] = base[nb % len_base];
        nb /= (unsigned int)len_base;
    }
    if (n < 0)
        nbr[0] = '-';
    return (nbr);
}
