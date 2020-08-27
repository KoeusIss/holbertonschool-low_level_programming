#include "search_algos.h"
/**
 * jump_search - implements the jump search algorithm
 * @array: a pointer to the first element of the searched list
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: (int) the first index where value is located
 * ------- (-1) if value not present, or array is null
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = sqrt(size);

	if (!array)
		return (-1);
	while (array[right < size ? right : size - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		left = right;
		right = right + sqrt(size);
		if (right >= size)
			break;
	}
	printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	while (array[left] <= value)
	{

		if (left == (right < size ? right : size))
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
		left++;
	}
	return (-1);
}
