#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of a node;
 * @tree: Pointer to the node of the tree to measure the depth;
 * Return: The depth of tree.
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *nparent;

	if (!tree)
		return (0);
	nparent = tree->parent;
	if (!nparent)
		return (0);
	return (1 + binary_tree_depth(nparent));
}
