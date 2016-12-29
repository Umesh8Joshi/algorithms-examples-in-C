//A program to find data in Array
#include <stdio.h>
int main()
{
	int array[] = {1,3,4,5,6,7,8,9,11,23,44,11};
	int item = 5;
	printf("Searching %d in array\n",item);
	for (int i = 0; i < 12; ++i)
	{
		if(array[i] == item){
			printf("found on array[%d]\n",i);
		}
	}
	return 0;
}