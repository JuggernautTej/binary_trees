#include "binary_trees.h"
/**
 * binary_tree_depth - a function that measures the depth of a node in a
 * binary tree
 * @tree: the pointer to the node to measure the depth
 * Return: 0 or node depth as size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t d = 0;
if (tree == NULL)
return (0);
while (tree->parent)
{
d++;
tree = tree->parent;
}
return (d);
}
