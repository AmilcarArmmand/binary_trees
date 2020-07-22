#include "binary_trees.h"

/**
 * binary_tree_delete - a function deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 *
 * Return: no return data type
 */
void binary_tree_delete(binary_tree_t *tree)
{
/* if the binary tree exists, delete recursively, left then right */
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
