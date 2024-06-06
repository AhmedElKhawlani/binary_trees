#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node;
 * @node: Pointer to the node to find the uncle;
 * Return: Pointer to the uncle node.
 **/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *par;

	if (!node)
		return (NULL);
	par = node->parent;
	return (binary_tree_sibling(par));
}

/**
 * binary_tree_sibling - Function that finds the sibling of a node
 * @node: Pointer to the node to find the sibling;
 * Return: Pointer to the sibling node.
 **/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *par;
	binary_tree_t *nleft;
	binary_tree_t *nright;

	if (!node)
		return (NULL);
	par = node->parent;
	if (!par)
		return (NULL);
	nleft = par->left;
	nright = par->right;
	if (!nleft || !nright)
		return (NULL);
	if (nleft == node)
		return (nright);
	return (nleft);
}

