#include "binary_trees.h"
/**
 *binary_tree_insert_right - insert in the right
 *@parent: parent node
 *@value: value of newnode
 *Return: newnode
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->right = parent->right;

	if (newnode->right != NULL)
	{
		newnode->right->parent = newnode;
	}
	newnode = newnode->right;

	return (newnode);
}
