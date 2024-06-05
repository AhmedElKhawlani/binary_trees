#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree;
 * @tree: Pointer to the root node of the tree to measure the height;
 * Return: The height of tree.
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	binary_tree_t *nleft;
	binary_tree_t *nright;

	if (!tree)
		return (0);
	nleft = tree->left;
	nright = tree->right;
	if (!nleft && !nright)
		return (0);
	return (1 + max_int(binary_tree_height(nleft), binary_tree_height(nright)));
}

/**
 * max_int - Gives the maximum of two heights;
 * @int1: First height;
 * @int2: Second height;
 * Return: The maximum of int1 and int2.
**/

size_t max_int(size_t int1, size_t int2)
{
	if (int1 > int2)
		return (int1);
	return (int2);
}
