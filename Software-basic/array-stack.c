#include <stdio.h>
# define SIZE 100 

int stack[SIZE];
int top;

void	init()
{
	int i;

	for (i = 0; i < SIZE; i++)
		stack[i] = 0;
	top = 0;
}		

void	push(int num)
{
	if (top < SIZE - 1)
	{
		stack[top] = num;
		top++;
	}
		return ;	
}

void	pop()
{
	if (top > 0)
		top--;
}

void	print_stack()
{
	int i;
	
	for (i = 0; i < top; i++)
		printf("%d|", stack[i]);
	printf("\n");
}

int		main()
{
	init();	
	push(7);
	printf("push(7)\n");
	print_stack();
	push(4);
	printf("push(4)\n");
	print_stack();
	push(7);
	printf("push(7)\n");
	print_stack();
	push(4);
	printf("push(4)\n");
	print_stack();
}
