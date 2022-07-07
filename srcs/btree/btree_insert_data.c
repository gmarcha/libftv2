#include "incs/btree/btree_insert_data.h"

t_btree* btree_insert_data(t_btree** node, void* content, t_cmp cmp) {
    assert(cmp != NULL);

    if (*node == NULL)
    {
        *node = btree_create_node(content);
        if (*node == NULL)
            return NULL;
        return *node;
    }
    if (cmp(content, (*node)->content) < 0)
        return btree_insert_data(&(*node)->left, content, cmp);
    return btree_insert_data(&(*node)->right, content, cmp);
}
