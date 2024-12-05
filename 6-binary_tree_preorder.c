#include "binary_trees.h"
/**
  * binary_tree_preorder - traverse a binary tree using preorder traversal
  * @tree: pointer to the root node of the tree
  * @func: pointer to function to call on each node
  * Return: nothing
  */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
