#ifndef SQUARESOLVER_H
#define SQUARESOLVER_H


#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int Data;

typedef struct Node Node;
struct Node {
    Data val;      
    Node* left = NULL;
    Node* right = NULL;
    Node* parent = NULL;
};

Node* tree_add(Node * tree, Data x, Node* tree_parent);

void tree_print_symmetric(Node* tree);

void tree_print_direct(Node* tree);

void tree_print_back(Node* tree);

Node* tree_gen(Data x);

void tree_destroy (Node * tree);

int tree_find_deep (Node * tree, int deep);

bool tree_check_voidness(Node* tree);

bool tree_check_balanse(Node* tree);

void tree_destroy_node_with_subtree(Node * tree);

Node* tree_add_subtree(Node * tree, Node* data, Node* tree_parent);

void tree_destroy_node(Node * tree);

#endif