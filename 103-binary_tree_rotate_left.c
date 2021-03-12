#include "binary_trees.h"

/**
 * binary_tree_rotate_left - traverse a binary tree using level-order
 * @tree: a pointer to the root node of the tree to traverse
 *
 * Description: If tree or func is Null, do nothing.
 * Return: No data type returned.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	temp = tree->right->left;
	tree->right->left = tree;
	tree->right = temp;
	if (temp)
		temp->parent = tree;
	temp = tree->parent;
	tree->parent = tree->right;
	tree->right->parent = temp;
	if (temp)
	{
		if (temp->left == tree)
			temp->left = temp->right;
		else
			temp->right = tree->right;
	}
	return (tree->right);
}
