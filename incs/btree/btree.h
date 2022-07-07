#pragma once

typedef struct s_btree {
    void* content;
    struct s_btree* left;
    struct s_btree* right;
} t_btree;

typedef int (*t_cmp)(void*, void*);
