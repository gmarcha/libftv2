#pragma once

typedef struct s_mem_alloc {
    void* content;
    void (*content_free)();
    const char* name;
} t_mem_alloc;
