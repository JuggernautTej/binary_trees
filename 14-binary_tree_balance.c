#include "binary_trees.h"
/**
 * binary_tree_balance -
 * @tree:
 *
 * Return: 
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int factor, left_h = 0, right_h = 0;
  
if (!tree)
return (0);
left_h = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
right_h = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
factor = left_h - right_h;
return (factor);
}
