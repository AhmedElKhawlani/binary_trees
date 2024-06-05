#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a tree;
 * @tree: Pointer to the root node of the tree to measure the size;
 * Return: The size of tree.
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{
	binary_tree_t *nleft;
	binary_tree_t *nright;

	if (!tree)
		return (0);
	nleft = tree->left;
	nright = tree->right;
	return (1 + binary_tree_size(nleft) + binary_tree_size(nright));
}

