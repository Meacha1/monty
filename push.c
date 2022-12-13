#include <stdio.h>
#include "monty.h"

void push(int n)
{
	top += 1;
	stack_arr[top] = n;
}
