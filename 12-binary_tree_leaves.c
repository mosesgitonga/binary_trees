#include "binary_trees.h"

/**
 * binary_tree_leaves - The function counts the
 * leaf nodes
 *
 * @tree: Pointer to the root
 * Return: Number of leaf nodes in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    /*Check if tree is null*/
    if (tree == NULL)
        return (0);

    /* Check if current node is a leaf Node */
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /*If CurrentNode is not a leaf node...*/
    return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
