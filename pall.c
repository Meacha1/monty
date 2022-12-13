#include "monty.h"

void pall()
{
	int i;
	for (i = top; i > -1; i--)
	{
		printf("%d\n", stack_arr[top]);
	}
}
