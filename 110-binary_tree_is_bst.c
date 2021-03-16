#include "binary_trees.h"

int bst_scan(const binary_tree_t *tree, int minKey, int maxKey);
/**
 * binary_tree_is_bst - checks if binary tree is valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to traverse
 *
 * Description: If tree or func is Null, do nothing.
 * Return: No data type returned.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Initial range is set to {minval = INT_MIN, maxval = INT_MAX} */
	return (bst_scan(tree, INT_MIN, INT_MAX));
}

/**
 * bst_scan - function that scans binary tree
 * @tree: point to the root of a binary tree to scan
 * @minKey: node value must be higher than
 * @maxKey: node value must be lower than
 *
 * Description: traverse the given preorder array and maintain a range
 * in which current element should lie
 * Return: 1 if f tree is a valid BST, and 0 otherwise
 */
int bst_scan(const binary_tree_t *tree, int minKey, int maxKey)
{
	/* if valid until the end, it's a BST return 1 */
	if (tree == NULL)
		return (1);

	/* if data falls out of range return 0 */
	if (tree->n < minKey || tree->n > maxKey)
		return (0);

	return (bst_scan(tree->left, minKey, tree->n - 1) &&
		bst_scan(tree->right, tree->n + 1, maxKey));
}
