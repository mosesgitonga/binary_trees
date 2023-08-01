#include "binary_trees.h"
/**
 * binary_tree_inorder - in-order traversal implementation
 * @tree: tree to traverse
 * @func: a pointer to a function for each node
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
