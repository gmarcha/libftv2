#include "incs/btree/btree_apply_prefix.h"

void btree_apply_prefix(t_btree* node, void (*f)(void*)) {
    if (node == NULL)
        return ;
    f(node->content);
    btree_apply_prefix(node->left, f);
    btree_apply_prefix(node->right, f);
}
