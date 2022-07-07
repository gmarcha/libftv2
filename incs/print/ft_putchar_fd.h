#pragma once

#ifdef _WIN32
    #include <io.h>
#else
    #include <unistd.h>
#endif

void ft_putchar_fd(int fd, char c);
