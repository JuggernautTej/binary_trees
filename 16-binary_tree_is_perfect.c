#include "binary_trees.h"
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 0 or 1
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((binary_tree_is_full(tree) == 1) &&
			(binary_tree_balance(tree) == 0))
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - a function that checks if a bianry tree is full
 * @tree: the pointer to the root node
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
return (0);
if (!tree->left && !tree->right)
return (1);
if (tree->left && tree->right)
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
else
return (0);
}

/**
 * binary_tree_height - a helper function to get the height of a tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 or the height as size_t.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_h, right_h;
if (!tree)
return (0);
left_h = binary_tree_height(tree->left);
right_h = binary_tree_height(tree->right);
return ((left_h > right_h) ? left_h + 1 : right_h + 1);
}

/**
 * binary_tree_balance - a function that measures the balance factor of a
 * binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 or balance factor as an int.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int factor, left_h, right_h;

if (!tree)
return (0);
left_h = (int)binary_tree_height(tree->left);
right_h = (int)binary_tree_height(tree->right);
factor = left_h - right_h;
return (factor);
}
