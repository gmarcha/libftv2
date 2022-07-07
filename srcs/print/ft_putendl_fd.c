#include "incs/print/ft_putendl_fd.h"

void ft_putendl_fd(int fd, const char* s) {
    assert(s != NULL);

    char* tmp = ft_strjoin(s, "\n");
    if (tmp == NULL)
        return ;
    write(fd, tmp, ft_strlen(s) + 1);
    free(tmp);
}
