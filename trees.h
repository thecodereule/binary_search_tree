#ifndef TREES_H
#define TREES_H

typedef struct node
{
    int number; 
    struct node *left;
    struct node *right;
}
node;

bool search(node *tree, int number);



#endif // TREES_H
