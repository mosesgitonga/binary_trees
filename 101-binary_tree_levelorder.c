#include "binary_trees.h"

/**
 * binary_tree_height - The fuction returns the
 * height of a tree.
 * @tree: Pointer to the root node
 * Return: If tree is NULL, your function must
 * return 0
 */
/*
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_side, right_side;

	left_side = 0;
	right_side = 0;

	 Check if tree is Empty 
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->left);

	return (1 + (left_side > right_side ? left_side : right_side));
}

*/
/**
 * binary_tree_levelorder - traverse through by level order
 * @tree:  tree to traverse
 * @func: function to print
 * Return: NULL or elements in tree
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

//	size_t tree_height = binary_tree_height(tree);
//	size_t queue_size = (1 << tree_height) - 1;
	binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1024);

	if (queue == NULL)
	{
		return;
	}

	int rear = 0;
	int front = 0;

	queue[rear++] = (binary_tree_t *) tree;

	while (front < rear)
	{
		binary_tree_t *current = queue[front++];

		if (current == NULL)
		{
			return;
		}
		func(current->n);
		
		if (current->left != NULL)
		{
			queue[rear++] = current->left;
		}
		if (current->right != NULL)
		{
			queue[rear++] = current->right;
		}
	}
	free(queue);
}
