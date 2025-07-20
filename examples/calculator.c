#include <stdio.h>

float soma(float a, float b) {
	return a + b;
}

float resta(float a, float b) {
	return a - b;
}

float mult(float a, float b) {
	return a * b;
}

float divi(float a, float b) {
	return a / b;
}


int main(){
	
	float a;
	float b;

	printf("Welcome to Calculator!!\n\n");

	printf("Options:\n");
	printf("\t0 ---> Sum\n");
	printf("\t1 ---> Subtraction\n");
	printf("\t2 ---> Multiplication\n");
	printf("\t3 ---> Division\n");


	infinite_loop:

	int option;
	printf("your choice: ");
	scanf("%d", &option);


	if (option == 0) {
		printf("Sum function:\n");

		printf("a = ");	scanf("%f", &a);
	    printf("b = ");	scanf("%f", &b);

		printf("a + b = %f\n", soma(a, b));
	} else if (option == 1) {
		printf("Subtraction function:\n");

		printf("a = ");	scanf("%f", &a);
	    printf("b = ");	scanf("%f", &b);

		printf("a - b = %f\n", resta(a, b));
	} else if (option == 2) {
		printf("Multiplication function:\n");

		printf("a = ");	scanf("%f", &a);
	    printf("b = ");	scanf("%f", &b);

		printf("a * b = %f\n", mult(a, b));
	} else if (option == 3) {
		printf("Division function:\n");

		printf("a = ");	scanf("%f", &a);
	    printf("b = ");	scanf("%f", &b);
	    
		printf("a / b = %f\n", divi(a, b));
	} else {
		printf("Invalid option!!\n");
		goto infinite_loop;
	}

	return 0;
}