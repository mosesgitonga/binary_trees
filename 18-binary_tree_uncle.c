#include "binary_trees.h"
/**
 * binary_tree_uncle - search for the uncle of a node
 * @node: curr node
 * Return: uncle of a node else NULL
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent->right == node->parent)
	{
		return (node->parent->parent->left);
	}
	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}

	return (NULL);
}
