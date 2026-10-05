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
    
    printf("NULL\n");

}

void isEmpty(Box *head){
    if (head == NULL){ // if the head is null that means there is no initial item containing data or a pointer.
        printf("The linked list is empty.\n");
    } else {
        printf("Not empty.\n");
        return;
    }
}

Box* addBox(Box *head){
    int new_val;
    Box *current = head;
    printf("Input the next element in the linked list: ");
    scanf("%d", &new_val);

    if (!current){
        current = malloc(sizeof(Box));
        current->data = new_val;
        current->next = NULL;
        return current;
    } else {
        Box *temp = current;
        while(temp!=NULL){
            temp = temp->next;
        }

        temp = malloc(sizeof(Box));
        temp->data = new_val;
        temp->next = NULL;
        return temp;
    }
}

int main(void){

    // Probably the most verbose way to do this
    Box * head = NULL;


    isEmpty(head);
    head = addBox(head);
    print(head);
    isEmpty(head);
    head->next = addBox(head);
    print(head);
    return 0;

}