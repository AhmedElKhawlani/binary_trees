#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes with at least 1 child;
 * @tree: Pointer to the root node of the tree to count the number of nodes;
 * Return: The number of nodes of tree.
 **/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	binary_tree_t *nleft;
	binary_tree_t *nright;
	size_t rec;

	if (!tree)
		return (0);
	nleft = tree->left;
	nright = tree->right;
	if (nleft || nright)
	{
		rec = 1 + binary_tree_nodes(nleft) + binary_tree_nodes(nright);
		return (rec);
	}
	else
		return (0);
}
