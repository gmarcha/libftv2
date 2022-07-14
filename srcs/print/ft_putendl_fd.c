#include "libftv2/incs/print/ft_putendl_fd.h"

#include <assert.h>
#include <stdlib.h>
#ifdef _WIN32
    #include <io.h>
#else
    #include <unistd.h>
#endif

#include "libftv2/incs/string/ft_strlen.h"
#include "libftv2/incs/string/ft_strjoin.h"

void ft_putendl_fd(int fd, const char* s) {
    assert(s != NULL);

    char* tmp = ft_strjoin(s, "\n");
    if (tmp == NULL)
        return ;
    write(fd, tmp, ft_strlen(s) + 1);
    free(tmp);
}
