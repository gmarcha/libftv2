#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wstrict-prototypes"

typedef void (*t_free)();

#pragma clang diagnostic pop

typedef struct s_mem_alloc {
    void* content;
    t_free content_free;
    const char* name;
} t_mem_alloc;
