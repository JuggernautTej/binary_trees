#include "binary_trees.h"
/**
 * binary_tree_size - a function that measures the sise of a binary tree
 * @tree: the pointer to the root of the tree
 * Return: 0 or the number of nodes in the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t no = 0;

if (!tree)
return (0);
no += 1;
no += binary_tree_size(tree->left);
no += binary_tree_size(tree->right);
return (no);
}
