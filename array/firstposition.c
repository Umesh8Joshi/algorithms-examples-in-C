// a program to add array at first position
#include<stdio.h>
int main()
{
	int a[] = {2,5,6,7};
	int N=4;
	int j=10;
	printf("The array before assertion\n");
	for (int i = 0; i < N; ++i)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	for (int i = N; i >= 0; i--)
	{
		a[i+1]= a[i];
	}
	a[0]=j;
	N++;
	printf("The array after editing\n");
	for (int i = 0; i < N; ++i)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	return 0;
}