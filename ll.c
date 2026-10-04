#include <stdio.h>
#include <stdlib.h> // Malloc

typedef struct Node{
    int data;
    struct Node * next;
} Box; 
// Box alias essentially LL is a collection of boxes that store 2 things Data and a pointer.

void print(Box * head){
    Box * current = head;
    while(current != NULL){ 
        // While we are not at the end of the linked list
        printf("%d -> ",current->data); // -> points to
        current = current->next;
    }


}

int main(void){

    // Probably the most verbose way to do this
    Box * head = NULL;
    head = malloc(sizeof(Box));
    head->data = 10;
    head->next = malloc(sizeof(Box));
    head->next->data = 5;
    head->next->next = malloc(sizeof(Box));
    head->next->next->data = 29;
    head->next->next->next = NULL; // The end of the LL.

    // Traversing the linked list
    print(head);
    printf("End.\n");

    // Avoiding Memory leaks dangling pointers
    free(head->next->next);
    head->next->next = NULL;
    free(head->next);
    head->next = NULL;
    free(head);
    head = NULL;


    

    return 0;

}