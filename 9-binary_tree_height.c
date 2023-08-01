#include "binary_trees.h"

/**
 * binary_tree_height - The fuction returns the
 * height of a tree.
 * @tree: Pointer to the root node
 * Return: If tree is NULL, your function must
 * return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_side_height, right_side_height;

    left_side_height = 0;
    right_side_height = 0;

    /* Check if tree is Empty */
    if (tree == NULL)
        return (0);
    
    left_side_height = binary_tree_height(tree->left);
    right_side_height = binary_tree_height(tree->left);

    return (1 + (left_side_height > right_side_height ? left_side_height : right_side_height));
}
