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
/*
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: tree to be traversed
 * Return: 0 or 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->right == NULL || tree->left == NULL)
	{
		return (0);
	}

	return (binary_tree_is_perfect(tree->left) &&
binary_tree_is_perfect(tree->right));
}
