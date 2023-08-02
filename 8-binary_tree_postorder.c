#include "binary_trees.h"

/**
 *binary_tree_postorder- The function transverses a
 *binary tree in and puts items in  postorder
 *@root: A pointer to the tree
 *@func: A pointer to the print function
 *Return: void
 */
void binary_tree_postorder(const binary_tree_t *root, void(*func)(int))
{
	/*Check if the tree is Empty*/
	if (root == NULLL)
		return;

	/*Transversal left->right->parent*/
	binary_tree_postorder(root->left, func);
	binary_tree_postorder(root->right, func);
	func(root->n);
}
