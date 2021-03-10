#include "binary_trees.h"

/**
 * binary_tree_postorder - a function that post-order traverses a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: No data type returned.  If tree or func is NULL do nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
/* if the binary tree exists, delete recursively, left then right */
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		/* value in node passed as a parameter to function */
		func(tree->n);
	}
}
