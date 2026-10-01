#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

	// got frustrated looking at stupid cm measurements on vinted
	// when browsing for clothes

	float value = 0;

	if (argc == 2){
		value = atof(argv[1]); // casts string argument to float
	} else {
		printf("Only one argument required\n");
		exit(1); // wondering if theres a better exit method in C.
	}

	int choice;
	float result;
	printf("[0] conv from cm / [1] conv from inch: ");
	scanf("%d",&choice);

	const float conversion = choice ? 2.54 : 0.3937; // ternary const initialization
	result = conversion * value;

	char * metric;

	switch(choice){
	case 0:
		metric = "in";
		printf("%.2f%s\n",result,metric);
		break; // otherwise the program outputs both for some reason.
	case 1:
		metric = "cm";
		printf("%.2f%s\n",result,metric);
		break;
	}

	return 0;
}