#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor
 * of a binary tree.
 *
 * @tree: is a pointer to the root node of the tree to measure
 * the balance factor.
 *
 * Return: the balance factor of  a BT.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int h_l = 0, h_r = 0;

	if (tree == NULL)
		return (0);

	h_l = tree_height(tree->left);
	h_r = tree_height(tree->right);

	return (h_l - h_r);
}

/**
 * tree_height - a function that measures the height of a BT.
 *
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: the height of a BT.
 */
int tree_height(const binary_tree_t *tree)
{
	int h_l = 0, h_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		h_l = tree_height(tree->left);
	if (tree->right != NULL)
		h_r = tree_height(tree->right);
	return ((h_l > h_r ? h_l : h_r) + 1);
}
