#include "binary_trees.h"

/**
 * binary_tree_postorder - a function that pre-order traverses a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: no return data type
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
/* if the binary tree exists, delete recursively, left then right */
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
