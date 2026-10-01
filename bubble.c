#include <stdio.h>


int main(){
	//bubble sort

	int arr[5] = {25, 60, 4, 7, 28};
	int temp;

	for (int i=0; i < 5; i++){
		for(int j=0; j<5; j++){
			if (arr[j] > arr[j+1]){
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("The sorted array is: \n");

	for (int b = 0; b < 5; b++){
		printf("%d ",arr[b]);
	}
}