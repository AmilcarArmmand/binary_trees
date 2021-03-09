#include "binary_trees.h"

/**
 * binary_tree_delete - a function deletes an entire binary tree.
 * @tree: a pointer to the root node of the tree to delete.
 *
 * Return: No data type returned.
 */
void binary_tree_delete(binary_tree_t *tree)
{
/* if the binary tree exists, recursively delete left then right nodes */
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
