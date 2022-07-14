#include "libftv2/incs/number/ft_itoa.h"

char* ft_itoa(int n) {
    size_t len = ft_nbrlen(n);
    char* nbr = malloc(sizeof(char) * (len + 1));
    if (nbr == NULL)
        return NULL;
    nbr[len] = '\0';
    unsigned int nb = n;
    if (n < 0)
        nb = -n;
    while (len--) {
        nbr[len] = "0123456789"[nb % 10];
        nb /= 10;
    }
    if (n < 0)
        nbr[0] = '-';
    return (nbr);
}
