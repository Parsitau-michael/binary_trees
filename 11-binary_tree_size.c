#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree.
 *
 * @tree: is a pointer to the root node of the tree to measure the size.
 *
 * Return: the size of a binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_size = binary_tree_size(tree->left);

	if (tree->right != NULL)
		right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
