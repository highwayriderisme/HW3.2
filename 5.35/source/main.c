#include<stdio.h> 

void main()
{
	int num = 1;
	printf("Please enter the integers:");
	scanf_s("%d", &num);
	for (int i = 1; i <=  num; i++)
	{
		printf("F(%d)=%d\n", i, F(i));
	}
	system ("PAUSE");
}

int F(int i)
{
	if (i <= 1)
		return 1;
	return F(i - 1) + F(i - 2);
}