#include <stdio.h>
#include <stdlib.h>

int main(){

    int* ptr = malloc(sizeof(int));

    if (ptr == NULL){
        printf("Malloc failed.\n");
        exit(1);
    } else {
        printf("Malloc successful\n");
        *ptr = 5;
    }
 
    printf("%d\n",*ptr);

    free(ptr);
    ptr = NULL; // stops further references from having an effect and gets rid of dangling pointer.


    return 0;
}