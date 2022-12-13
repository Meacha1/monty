#include <stdio.h>
#include "monty.h"

int top;
int stack_arr[MAX];

void push(int n)
{
	top += 1;
	stack_arr[top] = n;
}
