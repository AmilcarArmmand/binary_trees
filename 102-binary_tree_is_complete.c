#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is FULL, otherwise O
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes;
	int height;
	int perfect_number;
	int exponent;

	nodes = 0;
	height = 0;
	perfect_number = 1;

	if (tree == NULL)
		return (0);

	nodes = binary_tree_size(tree);
	height = binary_tree_height(tree);
	for (exponent = height; exponent > 0; exponent--)
	{
		perfect_number *= 2;
	}
	if (nodes == perfect_number - 1)
		return (1);

	return (0);
}

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measur
 *
 * Return: Size of tree, or O if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to delete
 *
 * Return: height of binary tree, or 0 and if NULL 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	left = 0;
	right = 0;

	if (tree == NULL)
		return (0);

	left = ((tree->left) ? 1 + binary_tree_height(tree->left) : 1);

	right = ((tree->right) ? 1 + binary_tree_height(tree->right) : 1);

	return (left > right ? left : right);
}
