#pragma once

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-prototypes"

typedef void (*t_free)();

#pragma GCC diagnostic pop

typedef struct s_mem_alloc {
    void* content;
    t_free content_free;
    const char* name;
} t_mem_alloc;
