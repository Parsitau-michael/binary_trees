#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes with at
 * least 1 child in a binary tree.
 *
 * @tree: is a pointer to the root node of the tree to count the
 * number of nodes.
 *
 * Return: the number of nodes with at least a child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_left = 0, count_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		count_left = binary_tree_nodes(tree->left);

	if (tree->right != NULL)
		count_right = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (count_left + count_right + 1);

	return (count_left + count_right);
}
