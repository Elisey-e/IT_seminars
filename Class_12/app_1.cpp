#include "functions.hpp"


int main ()
{
    Node* tree = tree_gen(10);
    tree_add(tree, 5, NULL);
    tree_add(tree, 3, NULL);
    tree_add(tree, 6, NULL);
    tree_add(tree, 15, NULL);
    tree_print_symmetric(tree);
    printf("\ndeep = %d\n", tree_find_deep(tree, 0));
    printf("balanse = %d\n", tree_check_balanse(tree));
    tree_add(tree, 1, NULL);
    tree_print_symmetric(tree);
    printf("\ndeep = %d\n", tree_find_deep(tree, 0));
    printf("balanse = %d\n", tree_check_balanse(tree));
    tree_destroy_node_with_subtree(tree->left->left);
    printf("deleted = ");
    tree_print_symmetric(tree);
    tree_add(tree, 3, NULL);
    tree_add(tree, 4, NULL);
    printf("\nstart = ");
    tree_print_symmetric(tree);
    tree_destroy_node(tree->left);
    printf("\ndeleted = ");
    tree_print_symmetric(tree);
}

