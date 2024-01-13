#include "binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */
void print_num(int n)
{
    printf("%d\n", n);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    binary_tree_t *uncle;

    root = binary_tree_node(NULL, 98);

    binary_tree_print(root);
    uncle = binary_tree_uncle(root);
    printf("Function ends: %p\n", (void *)uncle);
    
    printf("Uncle of %d: %d\n", root->n, uncle->n);

    return (0);
}
