#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree.
 *
 * @tree: is a pointer to the root node of the tree to count the
 * number of leaves.
 *
 * Return: the number of leaves in a binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_l = 0, right_l = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL)
		left_l = binary_tree_leaves(tree->left);

	if (tree->right != NULL)
		right_l = binary_tree_leaves(tree->right);

	return (left_l + right_l);
}
