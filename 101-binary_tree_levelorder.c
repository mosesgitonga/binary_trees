#include "binary_trees.h"
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
	
	binary_tree_t **queue = NULL;
	
	queue = malloc(sizeof(binary_tree_t) * 1024);

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

		queue[rear++] = current->left;
		queue[rear++] = current->right;
	}

	free(queue);
}
