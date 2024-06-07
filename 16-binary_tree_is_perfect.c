#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 *
 * @tree: is a pointer to the root node of the tree to check.
 *
 * Return: 1 if the BT is perfect and 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	depth = find_depth(tree);

	return (check_is_perfect(tree, depth, 0));
}

/**
 * find_depth - a function that finds the depth of a node in a BT.
 *
 * @tree: a pointer to the node to measure depth.
 *
 * Return: the depth of the node.
 */
int find_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree != NULL)
	{
		depth++;
		tree = tree->left;
	}

	return (depth);
}

/**
 * check_is_perfect -  a function that recursively checks if a node is a leaf
 * node and whether its depth is equal to the number of levels.
 *
 * @tree:  is a pointer to the node to be checked.
 * @depth: the depth of that node.
 * @level: the level of the node from the root.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int check_is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (check_is_perfect(tree->left, depth, level + 1) &&
			check_is_perfect(tree->right, depth, level + 1));
}
