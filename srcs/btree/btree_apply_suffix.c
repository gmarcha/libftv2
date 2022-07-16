#include "libftv2/incs/btree/btree_apply_suffix.h"

#include <assert.h>
#include <stddef.h>

void btree_apply_suffix(t_btree* node, void (*f)(void*)) {
    if (node == NULL)
        return;
    btree_apply_suffix(node->left, f);
    btree_apply_suffix(node->right, f);
    f(node->content);
}
