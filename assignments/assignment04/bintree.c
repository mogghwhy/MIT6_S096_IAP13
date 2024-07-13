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
    while (temp2 != NULL) {
        printf("temp2 is not NULL\n");
        temp1 = temp2;
        if (new_node->node_id < temp2->node_id) {
            printf("temp2 is left\n");
            temp2 = temp2->left; 
        } else {
            printf("temp2 is right\n");
            temp2 = temp2->right;
        }
    }
    if (temp1 == NULL) {
       printf("temp1 is NULL\n");
       printf("temp1 is new node\n");
       root = new_node;
    } else if (new_node->node_id < temp1->node_id) {
       printf("temp1 left is new node\n");
       temp1->left = new_node;
    } else {
       printf("temp1 right is new node\n");
       temp1->right = new_node;
    }
}

// Find the node with node_id, and return its data
int find_node_data(int node_id)
{
    return 0;
}

///***** OPTIONAL: Challenge yourself w/ deletion if you want ***///
/*//Find and remove a node in the binary tree with node_id.
//Children nodes are fixed appropriately.
void remove_node(int node_id) {

}
*/
