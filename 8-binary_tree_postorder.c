#include "binary_trees.h"
/**
 * binary_tree_postorder - A function that goes through a binary tree using
 * post-order travesal
 * @tree: the root
 * @func: the pointer to a function call for each node.
 * Return: void.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
