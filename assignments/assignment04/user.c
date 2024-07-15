#include <stdio.h>
#include "bintree.h"

int main() {
	/*
	Insert your test code here. Try inserting nodes then searching for them.

	When we grade, we will overwrite your main function with our own sequence of
	insertions and deletions to test your implementation. If you change the
	argument or return types of the binary tree functions, our grading code
	won't work!
	*/
        int id = 4;	
        insert_node(11,124);		
		#ifdef DEBUG
        printf("next node insertion\n");
		#endif
        insert_node(2,11);
		#ifdef DEBUG
        printf("next node insertion\n");
		#endif
		insert_node(21,111);
		#ifdef DEBUG
        printf("next node insertion\n");
		#endif
        insert_node(3,51);
		#ifdef DEBUG
        printf("next node insertion\n");
		#endif
        insert_node(5,551);
		#ifdef DEBUG
        printf("next node insertion\n");
		#endif
        insert_node(4,555);		
		printf("find node %i\n", id);
		printf("node data %i\n",find_node_data(id));
		clean_up();

	return 0;
}
