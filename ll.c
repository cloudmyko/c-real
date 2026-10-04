#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node * next;
} Box;

void print(Box * head){
    Box * current = head;
    while(current != NULL){ 
        // While we are not at the end of the linked list
        printf("%d -> \t",current->data);
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

    // Traversing the linked list
    print(head);

    // Avoiding Memory leaks dangling pointers
    free(head->next->next);
    head->next->next = NULL;
    free(head->next);
    head->next = NULL;
    free(head);
    head = NULL;


    

    return 0;

}