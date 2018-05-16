#include <stdio.h>
#include <stdlib.h>
#include "../include/BTree.h"
struct node{
    int sibSize;
    int curSibSize;
    node* siblings;
    int mykey;
};

/* allocates an array of n keys */
node* allocNodeSib(int n)
{
    node* pointers = malloc(sizeof(node)*n);
    return pointers;
};
node* initNode(int n)
{
    node* child = malloc(sizeof(node));
    child->sibSize = n;
    child->curSibSize = 0;
    child->siblings = allocNodeSib(n);
    child->mykey = -1;
    return child;
}
void freeNode(node* n)
{
    n->sibSize = 0;
    n->curSibSize = 0;
    free(n->siblings);
    n->mykey = -1;
    free(n);
}
/* creates empty root node of size n keys */
node* BTreeCreate(int n)
{
    node* root = initNode(n);
    return root;
}
