#include "functions.hpp"


Node* tree_gen(Data x){
    Node* tree = (Node*) calloc(1, sizeof(Node));
    tree->val = x;
    return tree;
}


Node* tree_add(Node * tree, Data x, Node* tree_parent){
    if (tree == NULL){
        tree = (Node*) calloc(1, sizeof(Node));
        tree->val = x;
        tree->parent = tree_parent;
    }
    else if (x < tree->val){
        tree->left = tree_add(tree->left, x, tree);
    }
    else if (x > tree->val){
        tree->right = tree_add(tree->right, x, tree);
    }

    return tree;
}


void tree_print_symmetric(Node* tree){
    if (tree == NULL){
        return;
    }
    printf("(");
    tree_print_symmetric(tree->left);
    printf("%d", tree->val);
    tree_print_symmetric(tree->right);
    printf(")");

    return;
}


void tree_print_direct(Node* tree){
    if (tree == NULL){
        return;
    }

    printf("%d ", tree->val);
    printf("(");
    tree_print_symmetric(tree->left);
    tree_print_symmetric(tree->right);
    printf(")");

    return;
}


void tree_print_back(Node* tree){
    if (tree == NULL){
        return;
    }

    printf("(");
    tree_print_symmetric(tree->left);
    tree_print_symmetric(tree->right);
    printf(")");
    printf("%d ", tree->val);

    return;
}


void tree_destroy(Node * tree) {
    if (tree != NULL) {
        tree_destroy(tree->left);
        tree_destroy(tree->right);
        free(tree);
    }
    return;
}


void tree_destroy_node_with_subtree(Node * tree){
    if (tree != NULL) {
        tree_destroy(tree->left);
        tree_destroy(tree->right);
        if (tree->parent->right == tree){
            tree->parent->right = NULL;
        }
        else if (tree->parent->left == tree){
            tree->parent->left = NULL;
        }
        else{
            assert(0);
        }
        free(tree);
    }
    return;
}


Node* tree_add_subtree(Node * tree, Node* data, Node* tree_parent){
    if (tree == NULL){
        tree = data;
        data->parent = tree_parent;
    }
    else if (data->val < tree->val){
        tree->left = tree_add_subtree(tree->left, data, tree);
    }
    else if (data->val > tree->val){
        tree->right = tree_add_subtree(tree->right, data, tree);
    }

    return tree;
}


void tree_destroy_node(Node * tree){
    if (tree != NULL) {
        if (tree->parent->left == tree){
            tree->parent->left = tree->left;
            tree_add_subtree(tree->parent, tree->right, NULL);
        }
        else{
            tree->parent->right = tree->left;
            tree_add_subtree(tree->parent, tree->right, NULL);
        }
    }
    return;
}


int tree_find_deep(Node * tree, int deep){
    if (tree == NULL) {
        return deep;
    }

    int d1 = tree_find_deep(tree->left, deep + 1);
    int d2 = tree_find_deep(tree->right, deep + 1);

    if (d1 > d2){
        return d1;
    }
    else{
        return d2;
    }
}


bool tree_check_voidness(Node* tree){
    if (tree == NULL) {
        return false;
    }
    else{
        return true;
    }
}


bool tree_check_balanse(Node* tree){
    if (tree == NULL){
        return true;
    }
    int d1 = tree_find_deep(tree->left, 0);
    int d2 = tree_find_deep(tree->right, 0);
    if (abs(d1 - d2) > 1){
        return false;
    }
    else{
        return tree_check_balanse(tree->left) && tree_check_balanse(tree->right);
    }
}