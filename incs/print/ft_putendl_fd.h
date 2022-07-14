#pragma once

#include <assert.h>
#include <stdlib.h>
#ifdef _WIN32
    #include <io.h>
#else
    #include <unistd.h>
#endif

#include "libftv2/incs/string/ft_strlen.h"
#include "libftv2/incs/string/ft_strjoin.h"

void ft_putendl_fd(int fd, const char* s);
