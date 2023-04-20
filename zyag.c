#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>
#include<math.h>
#include<stdbool.h>

//int main()
//{
//	int data = 1,i,j;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 0; j <= 4-i; j++)
//		{
//				printf(" ");
//		}
//		for(j = 0; j <i; j++)
//		{
//			printf("1 ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main() {
    float r, h, p = 3.14;
    scanf("%f %f", &h, &r);
    r = p * h * (r * r);
    h = 10000 / r;
    if (10000 % (int)r >= 1)
        ++h;
    printf("%.0f", h);
    return 0;
}