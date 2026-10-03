#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maxInt(size_t size){
    int max_unsigned = pow(2,(pow(2,(size*8)-1)-1));
    return max_unsigned;
}

int main(void){

    int* ptr = malloc(sizeof(int));

    if (ptr == NULL){
        printf("Malloc failed.\n");
        exit(1);
    }

    // No need for the if/else block 
    printf("Malloc successful!\n");
    printf("The size of the memory allocated is %zu bytes\n", sizeof(int));
    printf("The biggest signed integer you can use is %d\n", maxInt(sizeof(int)));
    printf("Num: ");
    scanf("%d", ptr);
    printf("You entered: %d\n",*ptr);
    printf("Freeing memory and resolving pointers...\n");
    free(ptr);
    ptr = NULL; // stops further references from having an effect and gets rid of dangling pointer.

    return 0;
}
