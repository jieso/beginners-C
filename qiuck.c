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
//����һ��pop�ѵĺ�����ÿ��ɾ��ֻ��ɾ�Ѷ���data,
//void Adjustdown(int* a, int n)
//{
//    //ɾ������Ҫ������������С�ѵĵ�������
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
//            swp(&a[parent], &a[child]);//��������
//            parent = child;
//            child = parent * 2 + 1;
//        }       
//        else
//        {
//            //��Ϊԭ���Ѿ�������õģ�ֻҪ����������һ��data����
//            //����ֻҪparentС��child��˵�����������µ��ˣ�ֱ������
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
//�Ա��ַ�������ӡ�����ַ���------------------------------------------------
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
    //nowָ����ʼλ��
    int* now = (int*)malloc(sizeof(int)*n);
    //i�����±꣬j������people��ʣ������
    int i = 1, j = 0, people = n;
    //���ٿռ�
    if (now == NULL)
    {
        printf("Space opening failed");
        return 0;
    }
    int* pn = now;
    //������д��ռ�
    while (i <= n)
    {
        *pn = i;
        pn++;
        i++;
    }
    pn = now;
    i = -1;
    //��ʼ����
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
    //ɸѡ��ʣ�µ���һ��
    while (i == 0&&pn<pn+n)
    {
        if (*pn != 0)
            i = *pn;
        pn++;
    }
    //�ͷ�malloc�����Ŀռ�
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
//    int a[5] = 0; // ���峤��Ϊ n �����飬ģ��Բ���������˵ı��
//
//    // ��ʼ����� 1~n
//for (int i = 0; i < n; i++) {
//    a[i] = i + 1;
//}
//
//int left = n; // ��¼Բ����ʣ�������
//int index = 0; // ��¼��ǰ�����ڼ�������
//
//while (left > 1) { // ֻҪʣ���������� 1 ��һֱִ��
//    for (int i = 0; i < n; i++) {
//        if (a[i] != 0) { // �������˻�û���˳�Ȧ��
//            index++; // ����һ����
//            if (index == 3) { // ���� 3�������˳�Ȧ��
//                a[i] = 0; // ��Ǹ�λ���ϵ����Ѿ��˳�Ȧ��
//                left--; // Բ����ʣ������ -1
//                index = 0; // ���ü�����
//                if (left == 1) { // ʣ�����һ���ˣ��������ı��
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
//return -1; // ���ִ���
//}
//
//int main() {
//    int n=1;
//    //scanf("%d", &n);
//    printf("%d\n", last_one(n));
//    return 0;
//}
