#pragma once

typedef struct s_rbtree {
    void* content;
    int color;
    struct s_rbtree* parent;
    struct s_rbtree* left;
    struct s_rbtree* right;
} t_rbtree;
