#include "binary_trees.h"
/**
  * binary_tree_is_leaf - to check if a node is a leaf
  * @node: pointer to the node to check
  * Return: 1 if node leaf 0 if not
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
