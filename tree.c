// Implements a list of numbers as a binary search tree

#include <stdio.h>
#include <stdlib.h>

// Represents a node
typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

void free_tree(node *root);
void print_tree(node *root);

int main(void)
{
    // Tree of size 0
    node *tree = NULL;

    // Add number to list
    node *n = malloc(sizeof(node)); // it is of type "node *" because when I asked malloc for enough space for memory for a node, I'm storing it in a "node *" pointer.
    if (n == NULL)
    {
        return 1;
    }
    n->number = 2; // initializing this node to contain the number 2
    n->left = NULL; // initializing the left child of that node to be NULL
    n->right = NULL; // initializing the right child of that node to be NULL
    tree = n; // initializing the tree itself to be equal to that particular node

    // Add number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 1;
    n->left = NULL;
    n->right = NULL;
    tree->left = n; // initialize the tree's left child to be n. ("2" was the root node and now "1" is the new left child)

    // Add number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 3;
    n->left = NULL;
    n->right = NULL;
    tree->right = n; // initialize the tree's right child to be n. ("2" was the root node and now "3" is the new right child)

    // Print tree
    print_tree(tree);

    // Free tree
    free_tree(tree);
}

void free_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}

void print_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // Recursion;
    print_tree(root->left);
    printf("%i\n", root->number);
    print_tree(root->right);
}

// bool search (node *tree, int number)
// {
//     if (tree == NULL)
//     {
//         return false;
//     }
//     else if (number < tree->number)
//     {
//         return search(tree->left, number);
//     }
//     else if (number > tree->number)
//     {
//         return search(tree->right, number);
//     }
//     else
//     {
//         return true;
//     }
// }