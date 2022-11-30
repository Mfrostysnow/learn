#define  _CRT_SECURE_NO_WARNINGS 1
#include"practice.h"
int iswanshu(int x) 
{
	int count=1;
	for (int i = 2; i <=x-1; i++) 
	{
		if (x % i == 0) 
		{
			count++;
		}
	}
	if (count == 0)
		return 1;
	else
		return count;
}
void wanshu() 
{
	int m, n,flag=0;
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++) 
	{
		if (iswanshu(i) != 1)
		{
			int flag = 1;
			printf("%d = 1",i);
			for (int j = 2; j <= i - 1; j++)
			{
				if (i % j == 0)
				{
					printf(" + %d", j);
				}
			}
			printf("\n");
		}
	}
	if (flag == 0)
		printf("None\n");
}