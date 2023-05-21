#define _CRT_SECURE_NO_WARNINGS 1

# include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<time.h>

//≤Â»Î≈≈–Ú------------------------------------------------------------------
void InsertSort(int** a, int n)
{
	assert(a);
	for (int i = 0; i < n - 1; ++i)
	{
		int end = i;
		int x = (*a)[end + 1];
		while (end >= 0)
		{
			if ((*a)[end] > x)
			{
				(*a)[end + 1] = (*a)[end];
				--end;
			}
			else
				break;
		}
		(*a)[end + 1] = x;
	}
	
 }

void ShellSort(int** a, int n)
{
	assert(a);
	int gap = n ;
	while(gap>1)
	{
		gap = gap / 2;
		for (int i = 0; i < n - gap; ++i)
		{
			int end = i;
			int x = (*a)[end + gap];
			while (end >= 0)
			{
				if ((*a)[end] > x)
				{
					(*a)[end + gap] = (*a)[end];
					end-=gap;
				}
				else
					break;
			}
			(*a)[end + gap] = x;
		}
	}

}

void TestOP()
{
	srand((int)time(0));
	const int N = 5000000;
	int* arr1 = (int*)malloc(sizeof(int) * N);
	int* arr2 = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; ++i)
	{
		arr1[i] = (int)rand();
		arr2[i] = arr1[i];
	}
	int begin, end;
	//int begin = clock();
	//InsertSort(&arr1, N);
	//int end = clock();
	//printf("%d\n", end - begin);
	begin = clock();
	ShellSort(&arr2, N);
	end = clock();
	printf("%d\n", end - begin);
	//for (int i = 0; i < N; ++i)
	//{
	//	printf("%d ", arr2[i]);
	//}
 	free(arr1);
	free(arr2);
}

int main()
{
	TestOP();
	return 0;
}