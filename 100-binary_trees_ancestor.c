#include "binary_trees.h"

/**
 * binary_trees_ancestor - function finds lowest common ancestor of two nodes
 * @first:  a pointer to the first node
 * @second:  a pointer to the second node
 *
 * Return: pointer to lowest common ancestor node, or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)second);

	if (first == second->parent || !first->parent ||
	    (!(first->parent->parent) && second->parent))
		return (binary_trees_ancestor(first, second->parent));

	if (first->parent == second || !second->parent ||
	    (!(second->parent->parent) && first->parent))
		return (binary_trees_ancestor(first->parent, second));

	return (binary_trees_ancestor(first->parent, second->parent));
}
