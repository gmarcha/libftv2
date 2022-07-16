#include "libftv2/incs/btree/btree_apply_prefix.h"

#include <assert.h>
#include <stddef.h>

void btree_apply_prefix(t_btree* node, void (*f)(void*)) {
    if (node == NULL)
        return;
    f(node->content);
    btree_apply_prefix(node->left, f);
    btree_apply_prefix(node->right, f);
}
