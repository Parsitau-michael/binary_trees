#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree.
 *
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: the height of binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_h = binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		right_h = binary_tree_height(tree->right) + 1;

	return (left_h > right_h ? left_h : right_h);
}
