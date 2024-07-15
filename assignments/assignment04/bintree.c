#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "bintree.h"

///*** DO NOT CHANGE ANY FUNCTION DEFINITIONS ***///

// Recall node is defined in the header file
node *root = NULL;

// Insert a new node into the binary tree with node_id and data
void insert_node(int node_id, int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->node_id = node_id;
    new_node->left = NULL;
    new_node->right = NULL;

    node *temp1 = NULL;
    node *temp2 = root;
    while (temp2 != NULL)
    {
#ifdef DEBUG
        printf("temp2 is not NULL\n");
#endif
        temp1 = temp2;
        if (new_node->node_id < temp2->node_id)
        {
#ifdef DEBUG
            printf("temp2 is left\n");
#endif
            temp2 = temp2->left;
        }
        else
        {
#ifdef DEBUG
            printf("temp2 is right\n");
#endif
            temp2 = temp2->right;
        }
    }
    if (temp1 == NULL)
    {
#ifdef DEBUG
        printf("temp1 is NULL\n");
        printf("temp1 is new node\n");
#endif
        root = new_node;
    }
    else if (new_node->node_id < temp1->node_id)
    {
#ifdef DEBUG
        printf("temp1 left is new node\n");
#endif
        temp1->left = new_node;
    }
    else
    {
#ifdef DEBUG
        printf("temp1 right is new node\n");
#endif
        temp1->right = new_node;
    }
}

// Find the node with node_id, and return its data
int find_node_data(int node_id)
{
    node *temp1 = NULL;
    if (root->node_id == node_id)
    {
        return root->data;
    }
    temp1 = root;
    while (temp1 != NULL)
    {
        if (temp1->node_id > node_id)
        {
            temp1 = temp1->left;
        }
        else
        {
            temp1 = temp1->right;
        }
        if (temp1 != NULL && temp1->node_id == node_id)
        {
            return temp1->data;
        }
    }
    return 0;
}

int check_up(node *n)
{
    if (n->left == NULL && n->right == NULL)
    {
        free(n);
    }
}

void clean_up(void)
{
    check_up(root);
}

///***** OPTIONAL: Challenge yourself w/ deletion if you want ***///
/*//Find and remove a node in the binary tree with node_id.
//Children nodes are fixed appropriately.
void remove_node(int node_id) {

}
*/
