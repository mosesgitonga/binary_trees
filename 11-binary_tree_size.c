#include "binary_trees.h"

/**
 * binary_tree_size - A function that measures the
 * size of a binary tree.
 *
 * @tree: Pointer to the root
 * Return: Size of binary tree or 0 if null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/*Check if Null*/
	if (tree == NULL)
		return (0);

	/**
	* recursively calculates the size of the binary
	* tree by counting the number of nodes in the
	* left and right subtrees and adding one for
	* the current node.
	*/

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
