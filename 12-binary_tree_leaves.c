#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree;
 * @tree: Pointer to the root node of the tree to count the number of leaves;
 * Return: The number if leaves of tree.
 **/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	binary_tree_t *nleft;
	binary_tree_t *nright;

	if (!tree)
		return (0);
	nleft = tree->left;
	nright = tree->right;
	if (!nleft && !nright)
		return (1);
	return (binary_tree_leaves(nleft) + binary_tree_leaves(nright));
}
