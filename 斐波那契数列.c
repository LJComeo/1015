#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int Febonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return Febonacci(n - 1) + Febonacci(n - 2);
}
int F()
{
	for (int i = 0; i < 1000000; i++)
	{
		if (Febonacci(i) >= 1000000)
		{
			return i;
		}
	}
	return 0;
}

int Mindistance(int N)
{
	int i, tmp = 0;
	int n = F();
	for (i = 0; i<n && Febonacci(i) <= N ; i++)
	{
		tmp = N - Febonacci(i);
		if (N - Febonacci(i) < tmp)
		{
			tmp = N - Febonacci(i);
		}
	}
	return tmp;
}
int main()
{
	int N = 0;
	scanf("%d", &N);
	int tmp = Mindistance(N);
	printf("%d\n", tmp);
	system("pause");
	return 0;
}