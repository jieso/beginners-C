#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>
#include<math.h>
#include<stdbool.h>
#define N 10

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
//这是一个pop堆的函数，每次删除只会删堆顶的data,
//void Adjustdown(int* a, int n)
//{
//    //删除后需要重新排序，这是小堆的调整排序
//    assert(a);
//    int parent =0;
//    int child = parent*2+1;
//    swp(&a[0], &a[n - 1]);
//    --n;
//    while (child<n)
//    {
//        if (a[child + 1] < a[child] && child +1< n)
//            ++child;
//        if(a[child]<a[parent])
//        {
//            swp(&a[parent], &a[child]);//交换函数
//            parent = child;
//            child = parent * 2 + 1;
//        }       
//        else
//        {
//            //因为原本堆就是排序好的，只要调整好其中一个data就行
//            //所以只要parent小于child就说明不用再向下调了，直接跳出
//            break;
//        }
//    }
//}

//int main() {
//    int n, data = 0;
//    scanf("%d", &n);
//    if (n < 12)
//        printf("2");
//    else
//    {
//        data = (n / 12) * 4;
//        if (n % 12 >= 0)
//            data += 2;
//    }
//    printf("%d", data);
//    return 0;
//}

//
//void print(int data, int* tmp)
//{
//    if (data > 9)
//        print(data / 10, tmp);
//    (*tmp) += data % 2;
//    (*tmp) *= 10;
//    return;
//}
//对比字符串，打印最大的字符串------------------------------------------------
//int my_strcmp(char*p1,char*p2)
//{
//    while (*p1||*p2)
//    {
//        if (*p1 > *p2)
//            return 0;
//        if (*p2 > *p1)
//            return 1;
//        p1++;
//        p2++;
//    }
//    return 0;
//}
//
// int main() {
// //   char arr[10][300] = { "abcdef", "abfdef" ,"abb",};
//    char arr[10][300] = { 0 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int i = 1;
//    int j = 0;
//    while(scanf("%s", arr[j])!=EOF&&j<size)
//    {
//        j++;
//        getchar();
//    }  
//     j=0;
//    while(i<size)
//    {
//        if (my_strcmp(arr[j], arr[i]))
//            j = i;
//       i++;
//    } 
//    printf("%s", arr[j]);
//    return 0;
//}

int last_one(int n)
{
    //now指针起始位置
    int* now = (int*)malloc(sizeof(int)*n);
    //i控制下标，j记数，people记剩下人数
    int i = 1, j = 0, people = n;
    //开辟空间
    if (now == NULL)
    {
        printf("Space opening failed");
        return 0;
    }
    int* pn = now;
    //把数字写入空间
    while (i <= n)
    {
        *pn = i;
        pn++;
        i++;
    }
    pn = now;
    i = -1;
    //开始运算
     while (people >1)
    {

        if (j == 3)
        {
            pn[i] = 0;
            people--;
            j = 0;
        }
        i++;
        j++;
        if (i >= n)
            i = 0;
            while (pn[i] == 0)
            {
                    i++;
                    if (i >= n)
                        i = 0;
            }

    }
    i = 0;
    pn = now;
    //筛选出剩下的那一个
    while (i == 0&&pn<pn+n)
    {
        if (*pn != 0)
            i = *pn;
        pn++;
    }
    //释放malloc出来的空间
        free(now);
   return i;
}

 int main()
  {
     int n = 43;
     printf("%d", last_one(n));
     return 0;
  }
//int last_one(int n) 
//{
//    int a[5] = 0; // 定义长度为 n 的数组，模拟圆桌上所有人的编号
//
//    // 初始化编号 1~n
//for (int i = 0; i < n; i++) {
//    a[i] = i + 1;
//}
//
//int left = n; // 记录圆桌上剩余的人数
//int index = 0; // 记录当前数到第几个人了
//
//while (left > 1) { // 只要剩余人数大于 1 就一直执行
//    for (int i = 0; i < n; i++) {
//        if (a[i] != 0) { // 如果这个人还没有退出圈子
//            index++; // 数到一个人
//            if (index == 3) { // 数到 3，该人退出圈子
//                a[i] = 0; // 标记该位置上的人已经退出圈子
//                left--; // 圆桌上剩余人数 -1
//                index = 0; // 重置计数器
//                if (left == 1) { // 剩下最后一个人，返回他的编号
//                    for (int j = 0; j < n; j++) {
//                        if (a[j] != 0) {
//                            return a[j];
//                        }
//                    }
//                }
//            }
//        }
//    }
//}
//
//return -1; // 出现错误
//}
//
//int main() {
//    int n=1;
//    //scanf("%d", &n);
//    printf("%d\n", last_one(n));
//    return 0;
//}
