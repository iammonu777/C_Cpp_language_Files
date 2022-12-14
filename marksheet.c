#include<stdio.h>
void main()
{
	char subjects[4][15] = {"math", "science", "english", "hindi"};
	int marks[4] = {100,80,100,50};
	int max_marks = 100;
	int passing_marks = 40;
	printf("subject\t|\tmax_marks\t|\tmarks\n");
	for (int i = 0; i < 4; i++)
    {
    	printf("%s\t|\t%d\t|\t%d\n", subjects[i], max_marks, marks[i]);
	}
	int total = marks[0] + marks[1] + marks[2] + marks[3];
	int percent = total / 4;
	printf("percentage %% is %d", percent);
}	
