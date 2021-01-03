#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int input = 0;
	int line = 0;
	printf("Would you like to join wuxi technician institute?(1/0)>:\n");
	printf("You need to study hard.\n");
	scanf("%d", &input);

	if (input == 1)
		printf("You will be on the peak of life\n");
		while (line <= 20000)
		{
		line++;
		printf("努力学习学习并且敲代码 : %d\n", line);
		}
		if (line >= 20000)
			printf("You will be on the peak of life\n");
	else 
		printf("Home pig\n");

	return 0;
}