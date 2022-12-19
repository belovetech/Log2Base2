#include <stdio.h>


/**
 * printArray - Print array 
 * 
 *  @arr: Array to sort
 * @size: Size of the array
 */
void printArray(int *arr, int size)
{
	printf("{");
	for (int i = 0; i < size; i++)
	{
		if (i < size - 1)
			printf("%d, ", arr[i]);
		else
			printf("%d", arr[i]);
	}
	printf("}\n");
}

/**
 * insertionSort - Sort element in the array using insertion sort
 * 
 * @arr: Array to sort
 * @size: Size of the array
 * Return: Sorted array
 */

// 20 30 10 50
void *insertionSort(int *arr, int size)
{
	int i, value, index;
	
	for (i = 1; i < size; i++)
	{
		value = arr[i];
		index = i;
		
		printf("\nOuter loop[%d] =>", i);
		printArray(arr, size);
		printf("\n");
		
	   while(index > 0 && arr[index - 1] > value)
	   {
			arr[index] = arr[index - 1];
			printf("Inner loop[%d] => ", index);
            printArray(arr, size);
			index--;
	   }
	   arr[index] = value;
	}
	return (arr);
}


int main(void)
{
	
	int arr[] = {90, 50, 90, 20, 10, 40};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	printf("<<<<<<<Print array BEFORE sorted>>>>>>>\n");
	printArray(arr, size);
	
	printf("\n<<<<<<<Sorting in process...>>>>>>>");
	int *res = insertionSort(arr, size);
	
	printf("\n<<<<<<<Print array AFTER sorted>>>>>>>>\n");
	printArray(res, size);
	
	
	return (0);
}