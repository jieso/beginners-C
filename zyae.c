#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>
#include<math.h>
#include<stdbool.h>




//int main()
//{
//	//钱
//	int money = 20;
//	//记录汽水瓶
//	int tmp = money;
// 	int tmp1 = 0;
//	while(money)
//	{
//		tmp += money / 2;
//		tmp1 += money % 2;
//		//余下来的单个瓶子余够两个就换一瓶汽水
//		if (tmp1 > 1)
//		{
//			tmp++;
//			money++;
//			tmp1 = 0;
//		}
//		money /= 2;
//	}
//	printf("%d", tmp);
//	return 0;
//}

//char* my_strcpy(char* dest,char*src)
//{
//    assert(*dest&&*src);
//    char* data = dest;
//    while (*src)
//    {
//        *dest = *src;
//        dest++;
//        src++;
//    }
//    *dest = '\0';
//    return data;
//}
//
//int main()
//{
//    char arr[10] = "0";
//    char arr1[] = "abcdefg";
//    my_strcpy(arr,arr1);
//    printf("%s", arr);
//    return 0;
//}

//void OddPutFront(int *data,int size)
//{
//	assert(*data);
//	int* head = data;
//	int* tail = (data+size-1);
//	while (head<tail)
//	{
//		if (*head % 2 != 0)
//			head++;
//		else if (*tail % 2 != 1)
//			tail--;
//		else
//		{
//			*head = *head ^ *tail;
//			*tail = *head ^ *tail;
//			*head = *head ^ *tail;
//			*head++;
//			*tail--;
//		}
//	}
//}
//杨辉三角-----------------------------------------------------------------
//int main()
//{
//    int i, j, a[11][11] = { 0,1 };
//    for (i = 1; i <= 10; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//
//	return 0;
//}

//int main()
//{
//	char data;
//	for (data = 'A'; data <= 'D'; data++)
//	{
//		if (((data != 'A') + (data == 'C')+(data == 'D') + (data != 'D')) == 3)
//		{
//			printf("%c", data);
//		}
//	}
//	return 0;
//}

int main()
{ 
	int A,B,C,D,E;
	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						if ((B == 2 || A == 3) &&
							(B == 2 || E == 4) &&
							(C == 1 || D == 2) &&
							(C == 5 || D == 3) &&
							(E == 4 || A == 1))

							if ((A != B) && (A != C) && (A != D) && (A != E)
								&& (B != C) && (B != D) && (B != E)
								&& (C != D) && (C != E)
								&& (D != E))
							{
								printf("A=%d B=%d C=%d D=%d D=%d",
								 A, B, C, D, E);

							}
										
					}
				}
			}
		}
	}
	return 0;
}