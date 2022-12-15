#include "monty.h"

/**
 * _isascii - function that checks the char is ASCII char
 *
 * @ch: The char to be checked
 * Return: see below
 * 1. upon success,
 * 0. upon fail
 */

int _isascii(int ch)
{
	return ((ch <= 127) && (ch >= 0));
}
