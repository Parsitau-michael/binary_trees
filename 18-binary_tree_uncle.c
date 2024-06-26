#include "binary_trees.h"

/**
 * binary_tree_uncle -  a function that finds the uncle of a node.
 *
 * @node: is a pointer to the node to find the uncle.
 *
 * Return: the uncle or NULL otherwise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left != NULL &&
		node->parent->parent->left != node->parent)
		return (node->parent->parent->left);

	if (node->parent->parent->right != NULL &&
		node->parent->parent->right != node->parent)
		return (node->parent->parent->right);

	return (NULL);
}
