/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>
#include<stdlib.h>


int search(int Arr[], int num, int j)
{
	int i;
	for (i = 0; i <= j; i++)
	{
		if (Arr[i] == num)
			return 1;
	}

	return 0;

}

void  remove_duplicates(int Arr[], int len)
{
	int i, j = 0;
	for (i = 1; i<len;)
	{
		if (search(Arr, Arr[i], j))
		{
		}
		else{ Arr[++j] = Arr[i];  }
		i++;

	}
	

}




void * removeArrayDuplicates(int *Arr, int len)
{

	if (Arr == NULL || len <= 0)return NULL;
	else
	{
		 remove_duplicates(Arr, len);

	}
	
	return NULL;
}