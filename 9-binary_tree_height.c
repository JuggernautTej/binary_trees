#include "binary_trees.h"
/**
 * helper_func - a function to get max height
 * @root: the root node.
 * @height: height encountered.
 * @maxi_h: maxiumum height encountered.
 * Return: void.
 */
void helper_func(const binary_tree_t *root, size_t *height, size_t *maxi_h)
{
if (root == NULL || (root->left == NULL && root->right == NULL))
return;
*height = *height + 1;
helper_func(root->left, height, maxi_h);
helper_func(root->right, height, maxi_h);
if (*height > *maxi_h)
*maxi_h = *height;
*height = *height - 1;
}
/**
 * binary_tree_height - A function that measures the height of a binary
 * tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: 0 or height of the tree as a size_t.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t height = 0;
size_t max_height = 0;
helper_func(tree, &height, &max_height);
return (max_height);
}
