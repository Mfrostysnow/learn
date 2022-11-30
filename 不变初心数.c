#define  _CRT_SECURE_NO_WARNINGS 1
#include"practice.h"
int chuxin(int x) 
{
	return x/100000+x/10000 - x / 100000 * 10 + x / 1000-x/10000*10 + x / 100-x/1000*10 + x / 10-x/100*10 + x / 1-x/10*10;
}
void bubianchuxin() 
{
	int n,x;
	scanf("%d", &n);
	int a[]={0};
	for (int i = 0; i < n; i++) 
	{
		scanf("%d", &x);
		a[i] = x;
		if (chuxin(2 * x) == chuxin(3 * x) && chuxin(2 * x) == chuxin(4 * x) && chuxin(2 * x) == chuxin(5 * x) && chuxin(2 * x) == chuxin(6 * x) && chuxin(2 * x) == chuxin(7 * x) && chuxin(2 * x) == chuxin(8 * x) && chuxin(2 * x) == chuxin(9 * x))
		{
			printf("%d\n", chuxin(2 * x));
		}
		else
			printf("NO\n");
	}
}