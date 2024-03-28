#include "binary_trees.h"
/**
 * binary_tree_height - A function that measures the height of a binary
 * tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: 0 or height of the tree as a size_t.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t size_left = 0, size_right = 0;

if (tree == NULL)
	return (0);

if (tree->left)
	size_left += 1 + binary_tree_height(tree->left);

if (tree->right)
	size_right += 1 + binary_tree_height(tree->right);

return (size_left > size_right ? size_left : size_right);
}
