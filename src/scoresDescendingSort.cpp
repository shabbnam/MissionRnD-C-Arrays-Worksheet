/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that sorts these scores in descending order.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40).
Output for this will be [ { "stud3", 40 }, { "stud2", 30 }, { "stud1", 20 } ]

INPUTS: Array of structures of type student, length of array.

OUTPUT: Sort the array in descending order of scores.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

struct student {
	char name[10];
	int score;
};

void * scoresDescendingSort(struct student *students, int len) {
	int i=0,j,temp,flag=-1;
	if (students == NULL || len <= 0)return NULL;
	else
	{
		

		while (i<len-1)
		{
			if (students[i].score<students[i + 1].score)
			{
				flag = 0;
			}
			else  flag = 1; break;
			i++;

		}
		if (flag == 0)
		{
			for (i = 0, j = len-1; i<j; i++, j--)
			{
				temp = students[j].score;
				students[j].score = students[i].score;
				students[i].score = temp;
			}

		}

	}


	return NULL;
}