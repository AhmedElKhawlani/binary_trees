#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes;
 * @first: Pointer to the first node;
 * @second: Pointer to the second node;
 * Return: Pointer to the lowest common ancestor node of the two given nodes.
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *parent1;
	binary_tree_t *parent2;

	if (!first || !second)
		return (NULL);
	parent1 = first->parent;
	parent2 = second->parent;
	if (parent1 == second)
		return (parent1);
	if (parent2 == first)
		return (parent2);
	if (parent1 == parent2)
		return (parent1);
	return (binary_trees_ancestor(parent1, parent2));
}
