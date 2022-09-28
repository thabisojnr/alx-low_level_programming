#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of an inputted number
 * @num: the number to find the square root of
 * @root: the root to be tested
 *
 * Return: if the number has a natural sqaure root - the square root
 * if the number does not have a natural square root - 1
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
}
