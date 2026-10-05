#include <stdio.h>
#include <stdlib.h> // Malloc

typedef struct Node{
    int data;
    struct Node * next;
} Box; 
// Box alias essentially LL is a collection of boxes that store 2 things Data and a pointer.

void print(Box *head){
    Box *current = head;
    while(current != NULL){ 
        // While we are not at the end of the linked list
        printf("%d -> ",current->data); // -> points to
        current = current->next;
    }


}

void isEmpty(Box *head){
    if (head == NULL){
        printf("The linked list is empty.\n");
    } else {
        return;
    }
}

void addBox(Box *head){
    int new_val;
    printf("Input the next element in the linked list: ");
    scanf("%d", &new_val);


}

int main(void){

    // Probably the most verbose way to do this
    Box * head = NULL;
    isEmpty(head);

    

    return 0;

}