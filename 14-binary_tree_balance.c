#include "binary_trees.h"

/**
 * binary_tree_height - Helper function to get height
 * of a binary tree
 * @tree: Pointer to root
 * Return: Height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 *binary_tree_balance - A function that gives the
 *balance of the tree
 *@tree: Pointer to root
 *Return: Balanced tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	/* Check if the tree is null */
	if (tree == NULL)
		return (0);

	/**
	* Return the subtraction value of the left and
	* right subtrees to determine if the tree
	* is balanced
	*/

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
