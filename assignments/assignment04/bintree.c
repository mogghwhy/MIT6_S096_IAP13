#include <stddef.h>
#include <stdlib.h>
#include "bintree.h"

///*** DO NOT CHANGE ANY FUNCTION DEFINITIONS ***///

// Recall node is defined in the header file
node *root = NULL;

// Insert a new node into the binary tree with node_id and data
void insert_node(int node_id, int data) {
    node* new_node = (node*) malloc(sizeof(node));
    new_node->data = data;
    new_node->node_id = node_id;
    new_node->left = NULL;
    new_node->right = NULL;
    bool not_set = true;    
    while(not_set) {
        node* parent = root;
    }
    if (root == NULL) {
        root = new_node;
    }
}

// Find the node with node_id, and return its data
int find_node_data(int node_id) {
    return 0;	
}

///***** OPTIONAL: Challenge yourself w/ deletion if you want ***///
/*//Find and remove a node in the binary tree with node_id. 
//Children nodes are fixed appropriately.
void remove_node(int node_id) {
	
}
*/
