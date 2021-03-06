#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>



typedef int data_t;


int index;
int n;

int push1(data_t push_data, data_t *stack_data)
{
	if (index < 10) {
		stack_data[index] = push_data;
		index++;
		return 1;
	}
	else {
		return 0;
	}
}


int pop1(data_t *pop_data, data_t *stack_data)
{

	if (index > 0) {
			index--;
			*pop_data = stack_data[index];
			return 1;
	}
	
	else {
		return 0;
	}
}



void stackPrint(data_t *stack_data)
{
	int i;

	for (i = index - 1; i >= 0; i--) {
		printf("%d", stack_data[i]);
		if (i > 0) {
			printf(",");
		}
	}
	printf("\n");
	
}

int main(int argc, char *argv[])
{
	
	
	
	char str[100];
	int p;
	index = 0;
	data_t *stack_data;
	

	stack_data = (int*)malloc(sizeof(int)*10);
	

	while (fgets(str, sizeof(str), stdin)) {
		
		n = atoi(str);

		if (1 <= n && n <= 100) {
			push1(n, stack_data);
		}

		

		if (n==-1) {
			pop1(&p, stack_data);
			printf("%d", p);
			printf("\n");

		}

		

		if (n == 0) {
			stackPrint(stack_data);
		}


	}

	
	free(stack_data);

	return 0;
 }
