#include "libftv2/incs/number/ft_itoa.h"

#include <stdlib.h>

#include "libftv2/incs/number/ft_nbrlen.h"

char* ft_itoa(int n) {
    size_t len = ft_nbrlen(n);
    char* nbr = malloc(sizeof(char) * (len + 1));
    if (nbr == NULL)
        return NULL;
    nbr[len] = '\0';
    unsigned int nb = (unsigned int)n;
    if (n < 0)
        nb = (unsigned int)-n;
    while (len--) {
        nbr[len] = "0123456789"[nb % 10];
        nb /= 10;
    }
    if (n < 0)
        nbr[0] = '-';
    return (nbr);
}
