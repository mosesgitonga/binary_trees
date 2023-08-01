#include "binary_trees.h"

/**
 *binary_tree_insert_left - insert the left of a node
 *@parent: node
 *@value: value of newnode
 *Return: newnode
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;
	if (parent == NULL)
	{
		return (NULL);
	}
	newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->left = parent->left;
	if (parent->left != NULL)
	{
		parent->left->parent = newnode;
	}
	parent->left =  newnode;
	return (newnode);
}

