#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect;
 * @tree: Pointer to the root node of the tree to check;
 * Return: 1 if tree is perfect, 0 otherwise.
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;
	size_t leaves;
	size_t leaves_calculated;

	if (binary_tree_is_full(tree) == 0)
		return (0);
	height = binary_tree_height(tree);
	leaves = binary_tree_leaves(tree);
	leaves_calculated = power(2, height);
	if (leaves_calculated != leaves)
		return (0);
	return (1);
}

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
	nl = tree->left;
	nr = tree->right;
	if (!nl && !nr)
		return (1);
	if (nl && nr)
		return (binary_tree_is_full(nr) * binary_tree_is_full(nl));
	return (0);
}

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

/**
 * binary_tree_height - Function that measures the height of a binary tree;
 * @tree: Pointer to the root node of the tree to measure the height;
 * Return: The height of tree.
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	binary_tree_t *nleft;
	binary_tree_t *nright;
	size_t h1;
	size_t h2;

	if (!tree)
		return (0);
	nleft = tree->left;
	nright = tree->right;
	if (!nleft && !nright)
		return (0);
	h1 = binary_tree_height(nleft);
	h2 = binary_tree_height(nright);
	if (h1 > h2)
		return (1 + h1);
	return (1 + h2);
}

/**
 * power - Funtion that calculates the power of two size_t;
 * @base: The base;
 * @pow: The power;
 * Return: base ^ pow.
 **/

size_t power(size_t base, size_t pow)
{
	if (pow == 0)
		return (1);
	return (base * power(base, pow - 1));
}
