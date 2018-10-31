#include<stdio.h>

int i(int j, int k);

int main()
{
	int x, y;
	printf("Please enter the base and its exponent:");
	scanf_s("%d %d", &x, &y);
    printf("Answer is %d\n", i(x, y));
    system("pause");
	return 0;
}
int  i(int j, int k)
{
	int b,power=1;
	for (b = 1; b <= k; b++)
	{
		power = power * j;
	}
	return power;
}