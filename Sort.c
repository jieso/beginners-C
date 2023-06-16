#define _CRT_SECURE_NO_WARNINGS 1

//# include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//#include<time.h>

#include"Sort.h"

//����-----------------------------------------------------------------------
void Swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//��������------------------------------------------------------------------
void InsertSort(int* a, int n)
{
	assert(a);
	for (int i = 0; i < n - 1; ++i)
	{
		int end = i;
		int x = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > x)
			{
				a[end + 1] = a[end];
				--end;
			}
			else
				break;
		}
		  a[end + 1] = x;
	}

}
//ϣ������--------------------------------------------------------------------
void ShellSort(int** a, int n)
{
	assert(a);
	int gap = n;
	while (gap > 1)
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
					end -= gap;
				}
				else
					break;
			}
			(*a)[end + gap] = x;
		}
	}

}
//ѡ������
void SelectSort(int** arr, int n)
{
	int* a = (*arr);
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		int mini = begin, maxi = begin;
		for (int i = begin; i <= end; ++i)
		{
			if (a[i] < a[mini])
				mini = i;
			if (a[i] > a[maxi])
				maxi = i;
		}
		Swap(&a[begin], &a[mini]);
		//����ж�һ��Ҫд����Ȼ�����ǿ϶�����
		if (begin == maxi)
			maxi = mini;
		Swap(&a[end], &a[maxi]);
		++begin;
		--end;
	}
}


//��ȡ�����м�ֵ--------------------------------------------------------------
int GetMidIndex(int* a, int left, int right)
{
	assert(a);
	//��ȡ�����м��±�
	int mid = left + ((right - left) >> 1);
	if (a[mid] > a[left])
	{
		if (a[mid] < a[right])
			return mid;
		else if (a[left] > a[right])
			return left;
		else
			return right;
	}
	else
	{
		if (a[left] < a[right])
			return left;
		else if (a[mid] < a[right])
			return right;
		else
			return mid;
	}
}

//�����㷨------------------------------------------------------------------
int Partion(int** data, int left, int right)
{

	assert(*data);
	int* a = (*data);
	int keyi = GetMidIndex(a,left,right);
	Swap(&a[keyi], &a[left]);
	keyi = left;
	//++left;
	while (left < right)
	{
		//�ұ����ߣ���С
		while (a[right] >= a[keyi] && right > left)
			right--;
		//������ߣ��Ҵ�
		while (a[left] <= a[keyi] && right > left)
			++left;
		Swap(&a[left], &a[right]);
	}
		Swap(&a[left], &a[keyi]);
	return left;
}

//�����㷨,������Ҳ������-------------------------------------------------------------------
int Partion3(int** data, int left, int right)
{
	assert(*data);
	int* a = (*data);
	int keyi = GetMidIndex(a, left, right);
	Swap(&a[keyi], &a[left]);
	int prev = left;
	int cur = left + 1;
	keyi = left;
	while (cur <= right)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
			Swap(&a[cur], &a[prev]);
		++cur;
	}
	Swap(&a[prev], &a[keyi]);
	return prev;
}

//����--------------------------------------------------------------------------
void QuickSort(int* a, int left, int right)
{
	if (left >= right)
		return;
	if (right - left+1 < 10)
		InsertSort(a+left, right - left + 1);
	else
	{
		int keyi = Partion3(&a, left, right);
		QuickSort(a, left, keyi - 1);
		QuickSort(a, keyi + 1, right);
	}
}

void QuickSortNonR(int* a, int left, int right)
{
	queue st;
	Init(&st);
	QueuePush(&st, left);
	QueuePush(&st,right);
	//QueuePush(&st, 20);
	//QueuePop(&st);
	//QueuePop(&st);
	//QueuePop(&st);
	while (StackEmpty(&st))
	{
		int begin = QueueFront(&st);
		QueuePop(&st);
		int end= QueueFront(&st);
		QueuePop(&st);
		int keyi = Partion3(&a, begin, end);
		if (keyi + 1 < end)
		{
			QueuePush(&st, keyi + 1);
			QueuePush(&st, end);
		}
		if (keyi - 1 > begin)
		{
			QueuePush(&st, begin);
			QueuePush(&st, keyi - 1);
		}
	}
	DestroyHead(&st);
}
//�鲢�㷨�ܹ�
//void _MergeSort(int* a, int left, int right, int* tmp)
//{
//	//�ݹ�ֹͣ����
//	if (left >= right)
//		return;
//	//�ݹ��������
//	int mid = (left + right) / 2;
//	_MergeSort(a, left, mid, tmp);
//	_MergeSort(a, mid + 1, right, tmp);
//	//���ֵ�������ݵ���С�����ʼ�鲢������
//	int begin1 = left, end1 = mid;
//	int begin2 = mid + 1, end2 = right;
//	int i = left;
//	while (begin1 <= end1 && begin2 <= end2)
//	{
//		if (a[begin1] < a[begin2])
//			tmp[i++] = a[begin1++];
//		else
//			tmp[i++] = a[begin2++];
//	}
//	while(begin1 <= end1)
//		tmp[i++] = a[begin1++];
//	while (begin2 <= end2)
//		tmp[i++] = a[begin2++];
//	for (int j = left; j <= right; ++j)
//	{
//		a[j] = tmp[j];
//	}
//}
//
////�鲢����
//void MergeSort(int* a, int n)
//{
//	int* tmp = (int*)malloc(sizeof(int) * n);
//	if (tmp == NULL)
//	{
//		printf("malloc fail");
//		return;
//	}
//	_MergeSort(&a[0], 0, n - 1, &tmp[0]);
//	free(tmp);
//	tmp = NULL;
//}
//�ǵݹ�鲢����
void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		printf("malloc fail");
		return;
	}
	 //���ķǵݹ�鲢�����㷨
	//[i,i+gap-1][i+gap,i+2*gap-1]
	int gap = 1;
	while(gap<n)
	{		
		for (int i = 0; i < n; i += 2 * gap)
		{
			//[i,i+gap-1][i+gap,i+2*gap-1]
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			int j = begin1;
			if (end1 >= n)
			{
				end1 = n - 1;
				begin2 = n + 1;
				end2 = n;
			}
			else if (begin2 >= n)
			{
				begin2 = n + 1;
				end2 = n;
			}
			else if (end2 >= n)
				end2 = n - 1;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
					tmp[j++] = a[begin1++];
				else
					tmp[j++] = a[begin2++];
			}
			while (begin1 <= end1)
				tmp[j++] = a[begin1++];
			while (begin2 <= end2)
				tmp[j++] = a[begin2++];
		}
		memcpy(a, tmp, sizeof(int) * n);
		gap *= 2;
	}
	free(tmp);
	tmp = NULL;
}


void TestOP()
{
	srand((int)time(0));
	int N = 200;
	int* arr1 = (int*)malloc(sizeof(int) * N);
	int* arr2 = (int*)malloc(sizeof(int) * N);
	int* arr3 = (int*)malloc(sizeof(int) * N);
	int* arr4 = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; ++i)
	{
		arr1[i] = (int)rand();
		arr2[i] = arr1[i];
		arr3[i] = arr1[i];
		arr4[i] = arr1[i];
	}
	int begin, end;
	//begin = clock();
	//InsertSort(&arr1, N);
	//end = clock();
	//printf("%d\n", end - begin);
	// ϣ������
	//begin = clock();
	//ShellSort(&arr2, N);
	//end = clock();
	//printf("%d\n", end - begin);
	// 
	//ѡ������
	//begin = clock();
	//SelectSort(&arr3, N);
	//end = clock();
 //   printf("%d\n", end - begin);



	//for (int i = 0; i < N; ++i)
	//{
	//	printf("%d ", arr4[i]);
	//}
	//printf("\n");
	//����
	/*begin = clock();
	QuickSort(&arr4[0], 0, N - 1);
	end = clock();
	printf("%d\n", end - begin);*/
	//�鲢����
	begin = clock();
	MergeSortNonR(&arr1[0], N);
	end = clock();
 	printf("%d\n", end - begin);
	free(arr1);
	free(arr2);
	free(arr3);
	free(arr4);
}

int main()
{	
	TestOP();
	return 0;
}