#include "binary_trees.h"
/**
 * binary_tree_delete - A function to delete an entire binary tree
 * @tree: the tree to be deleted
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}

