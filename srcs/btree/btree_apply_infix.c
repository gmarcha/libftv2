#include "libftv2/incs/btree/btree_apply_infix.h"

void btree_apply_infix(t_btree* node, void (*f)(void*)) {
    assert(f != NULL);

    if (node == NULL)
        return ;
    btree_apply_infix(node->left, f);
    f(node->content);
    btree_apply_infix(node->right, f);
}
