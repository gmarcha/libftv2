#include "incs/btree/btree_search_data.h"

void* btree_search_data(t_btree* node, void* data_ref, t_cmp cmp) {
    assert(cmp != NULL);

    if (node == NULL)
        return NULL;
    if (btree_search_data(node->left, data_ref, cmp) != NULL)
        return data_ref;
    if (cmp(node->content, data_ref) == 0)
        return data_ref;
    return btree_search_data(node->right, data_ref, cmp);
}
