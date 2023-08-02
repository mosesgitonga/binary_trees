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
	int left_side, right_side;

	left_side = 0;
	right_side = 0;

	/* Check if tree is Empty */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->left);

	return (1 + (left_side > right_side ? left_side : right_side));
}
