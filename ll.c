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
    Box *current = head; //?
    printf("Input the next element in the linked list: ");
    scanf("%d", &new_val);

    if (current == NULL){ // if current is null
        current = malloc(sizeof(Box)); // allocates it memory inits data to 0
        current->data = new_val;
        current->next = NULL; // the next pointer past the current box is set to null to terminate the list
        return current; // return it so we are able to 
    } else {
        Box *temp = current;
        while(temp->next!=NULL){ // while we aren't at the end of the list
            temp = temp->next; // traverse through the ll
        }

        temp->next = malloc(sizeof(Box));
        temp->next->data = new_val;
        temp->next->next = NULL;
        return current; // returning house keys
    }
}

int main(void){

    // Probably the most verbose way to do this
    Box * head = NULL;


    isEmpty(head);
    head = addBox(head);
    print(head);
    isEmpty(head);
    head = addBox(head);
    print(head);
    isEmpty(head);
    head = addBox(head);
    print(head);
    return 0;

}