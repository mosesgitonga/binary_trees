#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a tree is full
 *
 * Description: All Nodes have either 2 children
 * or no children
 * @tree: Pointer to the root
 * Return: 1 if the tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    /* Check if the tree is null */
    if (tree == NULL)
        return (0);

    /*if node iz a leaf it is full*/
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /*check recursively for both 2 and 0 children*/
    
    if (tree->left != NULL && tree->right != NULL)
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

    /*if node has only one child it is not full*/
    return (0);
}
