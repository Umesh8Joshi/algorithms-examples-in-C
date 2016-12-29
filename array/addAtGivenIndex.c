//add at any index of array
#include<stdio.h>
#define MAX 5
int main()
{
	array[MAX] = {1,5,6,7};
	int N = 4;
	int index = 3;
	int value = 9;
	printf("The array before assertion\n");
	for (int i = 0; i < N; ++i)
	{
		printf("array[%d] = %d\n",i,array[i]);
	}
	N++;
	for (int i = N; i >= index ; i--)
	{
		array[i+1] = array[i];
	}
	array[index] = value;
	printf("array after changed\n");
	for (int i = 0; i < N; ++i)
	{
		printf("array[%d] = %d\n",i,array[i]);
	}
	return 0;
}