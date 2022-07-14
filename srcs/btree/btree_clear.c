#include "libftv2/incs/btree/btree_clear.h"

void btree_clear(t_btree* node, void (*del)(void*)) {
    if (node == NULL)
        return ;
    btree_clear(node->left, del);
    btree_clear(node->right, del);
    if (del != NULL)
        del(node->content);
    free(node);
}
