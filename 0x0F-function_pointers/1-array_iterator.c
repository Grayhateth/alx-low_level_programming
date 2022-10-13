#include <stdio.h>

/**
 * array_iterator- function that xecutes function given as param.
 * @array: array og elements.
 * @size: size of array.
 * @action: function pointers.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
