#include <stdio.h>

void swap_Temp(int*, int*);
void swap_Add(int*, int*);
void swap_Mul(int*, int*);
void swap_XOR(int*, int*);

int main(){
	int key = 1;
	int x;
	int y;
	while (1){
		printf("0. exit\n");
		printf("1. swap_Temp\n");
		printf("2. swap_Add\n");
		printf("3. swap_Mul\n");
		printf("4. swap_XOR\n");
		scanf_s("%d", &key);
		if (key == 0)
			break;
		printf("choose two integer.\n");
		scanf_s("%d %d", &x, &y);
		switch (key)
		{
		case 0:
			break;
		case 1:
			swap_Temp(&x, &y); break;
		case 2:
			swap_Add(&x, &y); break;
		case 3:
			swap_Mul(&x, &y); break;
		case 4:
			swap_XOR(&x, &y); break;
		}
		printf("\n\n");
	}


	return 0;
}

void swap_Temp(int* x, int* y){
	printf("swap_Temp called\n");
	printf("%d %d\n", *x, *y);
	int temp = *x;
	*x = *y;
	*y = temp;
	printf("%d %d\n", *x, *y);

}

void swap_Add(int* x, int* y){
	printf("swap_Add called\n");
	printf("%d %d\n", *x, *y);
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
	printf("%d %d\n", *x, *y);

}

void swap_Mul(int* x, int* y){
	printf("swap_Mul called\n");
	printf("%d %d\n", *x, *y);
	*x = *x * *y;
	*y = *x / *y;
	*x = *x / *y;
	printf("%d %d\n", *x, *y);

}

void swap_XOR(int* x, int* y){
	printf("swap_XOR called\n");
	printf("%d %d\n", *x, *y);
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;
	printf("%d %d\n", *x, *y);

}
