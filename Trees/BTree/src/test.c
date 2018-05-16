#include "../include/BTree.h"

int main()
{
    node* root = BTreeCreate(5);
    freeNode(root);
    return 0;
}
