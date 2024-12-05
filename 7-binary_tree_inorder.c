#include "binary_trees.h"
/**
  * binary_tree_inorder - traverse a binary tree using inorder traversal
  * @tree: pointer to the root
  * @func: pointer to function to call for each node
  * Return: nothing
  */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree)
}
