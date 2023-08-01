#include "binary_trees.h"
/**
* binary_tree_is_leaf - check if node is leaf
* @node: node being traversed
* Return: int(0) or (1)
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}


	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}

	return (0);
}
