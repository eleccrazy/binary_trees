#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: A pointer to the e root node of the tree to check
 *
 * Return: 0 if tree is NULL or if it is not full, otherwise it
 * returns 1.
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left == NULL && tree->right != NULL)
			|| (tree->left != NULL && tree->right == NULL)
			|| binary_tree_is_full(tree->right)
			|| binary_tree_is_full(tree->left)
			|| (tree->left == NULL && tree->right == NULL))
		return (0);
	return (1);
}
