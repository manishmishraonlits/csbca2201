#include <stdio.h>
#define N 10

void display(int arr[], char *str);

int main(void)
{
	int arr[N] = {45, 8, 67, 2, 1, 45, 19, 99, 22, 70};
	int i, j, t;
	
	display(arr, "before");
	for(i = 0; i < N-1; i++)
	{
		for(j = i + 1; j < N; j++)
		{
			if(arr[i] < arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
	display(arr, "after");
	return 0;
}


void display(int arr[], char *str)
{
	int i;
	printf("Array contents %s sorting:\n", str);
	for(i=0; i<N; i++)
	{
		printf("%d\n", arr[i]);
	}
}


