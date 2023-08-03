#include "binary_trees.h"
/**
 * binary_trees_ancestor - find lowest common ancestor
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: NULL or ancestor
 */

binary_tree_t
*binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *) first);
	}
	if (first == second->parent)
	{
		return ((binary_tree_t *) first);
	}
	if (second == first->parent)
	{
		return ((binary_tree_t *) second);

	}

	if (first->parent == NULL || second->parent == NULL)
	{
		return (NULL);
	}

	if (first->parent == second->parent)
	{
		return (binary_trees_ancestor(first->parent, second->parent));

	}

	return (binary_trees_ancestor(first, second->parent));
}
