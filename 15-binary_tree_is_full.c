#include "binary_trees.h"
/**
 * binary_tree_is_full - Function that checks if a binary tree is full;
 * @tree: Pointer to the root node of the tree to check;
 * Return: 1 if tree is full, 0 otherwise.
 **/

int binary_tree_is_full(const binary_tree_t *tree)
{
	binary_tree_t *nl;
	binary_tree_t *nr;

	if (!tree)
		return (0);
	if (binary_tree_is_leaf(tree) == 1)
		return (1);
	nl = tree->left;
	nr = tree->right;
	if (nl && nr)
		return (binary_tree_is_full(nr) * binary_tree_is_full(nl));
	else
		return (0);
}

/**
 * binary_tree_is_leaf - Function that checks if a node is a leaf;
 * @node: Pointer to the node to check;
 * Return: 1 if node is a leaf, 0 otherwise.
**/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->right && !node->left)
		return (1);
	else
		return (0);
}
