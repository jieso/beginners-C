#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<string.h>
//#include<windows.h>//ʹ��Sleep����Ҫ���õ�ͷ�ļ�
//#include<stdlib.h>//����cls�����Ļ��ʹ�õ�ͷ�ļ�������rand-���������ָ��,����system()ִ��ϵͳ����
//#include<math.h>//ʹ��sqrt - ��ƽ���⺯��
//#include<time.h>
//#include<string.h>//����strcmp�Ƚ��ַ�������
//static��̬����ָ��书���Ǹ�������г������ԣ��Ҳ��ܱ��ⲿ�ļ���������
// sizeof �Ǽ���char arr4��ռ�ռ�Ĵ�С������\0���ܼ�����������顢���͵Ĵ�С-��λ���ֽ�-�ǲ�����
// strlen�����ַ������ȵĴ�С����ֻ�����ַ����ĳ���-�ǿ⺯��-������ͷ�ļ�
// stack overflow__��ջ���
// 
//int add(int x, int y)
//{
//	return (x < y ? x : y);
//}


//int main()
//{
//
//	int a = 10;
//	int s = 20;
//	int max = 0; 
//	max = (a > s ? a : s);
//	printf("max = %d\n", max);
//	return 0;
//}
//int main()
//{
//	int arr[7] = { 11,22,33,44,55,66,77 };
//	printf("%d\n", arr[6]);
//	return 0;
//
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//}



//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;

//}
//int main()
//{
//	int ss = 12;
//	int* p = &ss;
//	//*p = 22;
//	printf("ss = %d\n", p);
//	return 0;

//}
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	return 0;
//}
//int main()
//{
//	char coding[20]={0};
//	printf("���ȥ�ô�����(ѡ��yes or no) :>");
//	scanf("%s", &coding);
//	if (strcmp(coding, "yes") ==0)
//	{
//		printf("�ɹ������������۷�\n");
//	}
//	else
//	{
//		printf("��ȥ��ȥ����Ѽ��\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 11;
//	/*printf("%p\n", &a);*/
//	int* p = &a;
//	/*printf("%p\n", p);*/
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));
//	//*pd = 5.5;
//	//printf("%lf\n", *pd);
//	return 0;
//}
// 
// 
 //�������Եȵı�д����
//struct Book
//{
//	char name[20];
//	short prince;
//};
//int main()
//{
//	struct Book b1 = { "c���Գ������",55 };
//	strcpy(b1.name, "c++");
//	printf("%s\n", b1.name);
	//struct Book* pd = &b1;
	//printf("%s\n", pd->name);
	//printf("%d\n", pd->prince);
	//printf("����:%s\n", b1.name);
	//printf("�۸�:%dԪ\n", b1.prince);
	//b1.prince = 15;
	//printf("�޸ĺ�ļ۸�:%d\n", b1.prince);
//	return 0;
//}
// 
// if���������޳���
//int main()
//{
//	//int age = 1;
//	//if (age < 18)
//	//{
//	//	printf("����̸\n");
//	//	printf("δ����\n");
//	//}
//	//else if (age >= 18 && age < 28)
//	//	printf("����\n");
//	//else if (age >= 28 && age < 50)
//	//	printf("׳��\n");
//	//else if (age >= 50 && age < 90)
//	//	printf("����\n");
//	//else
//	//	printf("�ϲ���\n");//elseֻ������������ifƥ��,
//	//һ���Ⱥ��Ǹ�ֵ�����Ⱥ����ж����
//	int a = 0;
//	int b = 2;
//
//	return 0;
//}
			//int a = 1;
	///*scanf("%d", &a);*/
	//while ( a <= 100)
	//{
	//
	//	if (a%2 != 0)
	//printf("%d  ", a);a++;
//
// 
//����һ���������������򣬳�Switch���
	//int day = 0;
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1:
	//	printf("����һ\n");
	//	break;
	//case 2:
	//	printf("���ڶ�\n");
	//	break;
	//case 3:
	//	printf("������\n");
	//	break;
	//case 4:
	//	printf("������\n");
	//	break;
	/*case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		printf("ȥ����\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������\n");
		break;
	}*/
//
// 
// ѭ��ϵͳ
	//int i = 1;
	//while(i<=10)
	//{
	//	if (i <= 5)
	//		continue;//�����������ص��������ѭ��
	//		printf("%d", i);
	//	i++;
	//}
	//int ch = 0;
	////ctrl+z�˳�ѭ��
	////EOF = end of file ->-1
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	/*}*/

//�����������
	//int ret = 0;
	//int ch = 0;
	//char mima[20] = { 0 };
	//printf("����������:>");//����������һ�����ݻ��������粻��ʱ�����ᱻ��һ�������ȡ���س�������/
	//scanf("%s",mima);
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}
	//printf("��ȷ�ϣ�Y/N):>");
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("ȷ��ͨ��\n");
	//}
	//else
	//{
	//	printf("ȡ��ȷ��\n");
	//}
	//printf("%d\n", '\n');

	//int ch;
	//char a = ("sss");
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < '0' || ch>'8')
	//		
	//		continue;
	//	ch++;
	//	putchar(ch);
	//	printf("%c\n", a);if//if

	//}

//ָ��for��if������
		//int i;
		//for (i = 0; i < 11; i++)
		//{
		//	if (i == 5)
		//		break;//��ָ���������ѭ������for��if��������һ��
		//	printf("  %d", i);
		//}

	//int i = 0;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		continue;
	//	printf("%d\n",i);
	//	i++;
	//}

//��n����������
	//int i = 1;
	//int n = 1;
	//int p = 0;
	//int z = 0;
	//scanf("%d", &n);
	//do
	//{
	//	
	//	p = i * n;
	///*	printf("  %d", p);*/
	//	i++;
	//	z = z + p;
	//	printf("  %d", z);
	//}
	//while(i<=n);
//
//      "�����������ֳ���",���ֲ��ҷ�
	//int arr[] = { 1,2,3,4,5,6,8,9,10 };
	//int k = 7;
	//int sz = sizeof(arr)/sizeof(arr[0]);
	//int left = 0;
	//int right = sz - 1;
	////printf("��������Ҫ���ҵ�����:");
	////scanf("%d", &k);
	//
	//while(left <= right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else
	//	{
	//		printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("�Ҳ���\n");
	//}
//
// 
//��ʾ����ַ��������ƶ������м��ۡ�

//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
////	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//sizeof����char��ռ�õ��ֽ���
//	int right = strlen(arr1)-1;//strlen����char������ַ�����������\0
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);//s�Ǵ�ӡӢ�ĵ�
//		Sleep(500);//�����ǵ�λ1000�������1��
//		system("cls");//ִ��ϵͳ�����һ������,cls�������Ļ
//		left++;
//		right--;	
//	}
	//printf("%s\n", arr2);
//
//
//�����¼����

		//int i = 0;
		//char mima[20] = {0};
		//for(i=0; i<3; i++)
		//{
		//	printf("����������:>");
		//	scanf("%s", mima);
		//	if (strcmp(mima,"123456") == 0)//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯�� strcmp
		//	{
		//		printf("��¼�ɹ�\n");
		//		break;
		//	}
		//	else
		//	{
		//		printf("�������\n");
		//	}
		//}
		//if (i == 3)
		//	printf("����������������˳�����\n");
//
//
//�������Ӵ�С�������

			//int a, s, d;
			//scanf("%d%d%d", &a, &s, &d);
			//if (a < s) {
			//	int tmp = a;
			//	a = s;
			//	s = tmp;
			//}
			//if (a < d) {
			//	int tmp = a;
			//	a = d;
			//	d = tmp;

			//}
			//if (s < d) {
			//	int tmp = d;
			//	d = s;
			//	s = tmp;
			//}
			//printf("%d %d %d\n",a,s,d);
//
// 
// ��ȡ3�ı�������			
			//int i;
			//for (i = 1; i <= 100; i++) 
			//{
			//	if (i % 3 == 0)//%�������������������˼��˼i������3���������0
			//		printf(" %d", i);
			//}
	//
	// 
	// ��ȡ�������������������
			//int w = 24;
			//int e = 18;
			//int r;
			//scanf("%d%d", &w, &e);
			//while (r=w % e)
			//{
   // 			//r = w % e;
			//	w = e;
			//	e = r;
			//}
			//printf("%d ", e);
			// 
			// 
			// ��ӡһǧ����ǧ��֮������ĳ���
			// ����1
	//	int main()
 //{			
	//		int run;
	//		int nian = 0;
	//		for(run=1000;run<=2000;run++)
	//			if ((run % 4 == 0 && run % 100 != 0) || (run % 400 == 0))
	//			{
	//				printf("%d ", run);
	//				nian++;
	//			}
	// 
	// 
	// ����2
	//			if (run % 4 == 0 && run % 100 != 0)
	//			{
	//				printf("%d ",run);
	//				nian++;
	//			}
	//			else if (run % 400 == 0)
	//			{
	//				printf("%d ", run);
	//				nian++;
	//			}
	//	
	//		printf("\n����=%d\n", nian);
	//		return 0;
 //}
//
//
//������ɸѡ����Ҳ���Գ���
//sqrt - ��ƽ�������ֿ⺯��
//int main()
//{
//	int i;
//	int count = 0;
// 	for (i = 101; i <= 200; i+=2)
//	{
//		int j;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//         }
//			if (j >sqrt(i))
//			{
//				count++;
//				printf("  %d", i);
//			}
//
//		
// 	}
//		printf("\ncount = %d\n", count);
//	return 0;
// }
//
//�ҳ�100����9�ĸ���
//int main()
//{
//	int i = 0;
//	int shu = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//			shu++;
//		if (i / 10 == 9)
//			shu++;
//	}
//	printf("  %d", shu);
//	return 0;
//}
// 
// �������
//int main()
//{
//	int a = 0;
//	double q = 0.0;
//	int bian = 1;
//	for (a = 1; a <= 100; a++)
//	{
//		q += bian * 1.0 / a;
//		bian = -bian;
//	}
//	printf(" %lf",q );//%lf�Ǵ�ӡ������
//	return 0;
//}
//
//
// 
// ������ֵ
//int main()
//{
//	int arr[] = { 18, 2, 55, 41, 5, 67, 71, 28, 59 };
//	int l = 0;
//	int zd = arr[1];
//	for (l = 0; l <=9; l++)
//	{
//		if (zd < arr[l])
//		{
//			zd = arr[l];
//		}
//		else if (zd > arr[l])
//		{
//			continue;
//		}
//	}
//	if (l=10)
//	{
//		printf("�����= %d", zd);
//	}
//	return 0;
//}
//
//
//�˷��ھ����ӡ
//int main()
//{
//	int x = 0;
//	
//	for (x = 1; x<= 9; x++)
//	{   
//		int y = 1;
//		for (y = 1; y <= x; y++)
//		{
//		 printf(" %d*%d=%-2d ", y,x,x*y);//%2d����˼��Ԥ����λ��ӡ�ռ䣬%-2d����˼������Ԥ����λ
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//
//
//�����ֳ���֪ʶ�㣬rand-srand
//void kai()
//{
//	printf("**************************\n");
//	printf("**** 1.play   0.exit *****\n");
//	printf("**************************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int shu = 0;
//	ret = rand()%100+1;//����һ���������һ������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &shu);
//		if (shu > ret && shu<=100)
//		{
//			printf("�´���\n");
//		}
//		else if (shu < ret && shu>=0)
//		{
//			printf("��С��\n");
//		}
//		
//		else if (shu ==ret)
//		{
//			printf("��ϲ���¶���\n");
//			break;
//
//		}
//        else if (shu!=1)
//		{
//			printf("�����������������\n");
//			game();
//		}
//	}
//		
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//��ʱ����������ֵ
//	int lun = 0;
//	do
//	{
//		kai();
//		printf("��ѡ��>��");
//		scanf("%d", &lun);
//		switch (lun)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (lun);
//
//	return 0;
//}
//
//
//strlen���ַ������Ⱥ���
//�ػ�����,��������cmd��ִ�г��򴰿�

//int main()
//{
//	char wenzi[20] = { 0 };
//	system("shutdown -s -t 60");//systen()-ִ��ϵͳ�����
//	again:
//	printf("��ע�⣬��ĵ��Ի���60���ڹػ�����ȡ���ػ����룺ȡ��\n������>:");
//	scanf("%s", &wenzi);//%s�Ǵ�ӡ�ַ�ָ��
//	if (strcmp(wenzi, "ȡ��")==0)//strcmp()��ר�������Ƚ������ַ����ĺ���
//
//	{
//		system("shutdown -a");//shutdown -aȡ���ػ�ָ��
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//
//
//
//int main()
//{
//	//strcpy()�ַ�������-ͷ�ļ�string.h
//	char arr[] ="hello world";
//	memset(arr, '*', 5);//���ݹ�ȥ����ascll�� ֵ
//	printf("%s\n", arr);
//	return 0;
//}
//
///
//
//
//void huan(int* pa, int* pb)//�������ݺ���
//{
//	int t = 0;
//	t = *pa;
//	*pa = *pb;
//	*pb = t;
//
//}
//
//
//int main()
//{
//	int a = 13;
//	int b = 23;
//	printf("ԭ��%d %d\n", a, b);
//	huan(&a, &b);
//	printf("����%d %d\n", a, b);
//	return 0;
//}
//
//�ж�����
//int shushu(int n)
//{
//	int j = 0;
//	for (j = 2; j <sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (shushu(i) == 1)
//			printf("  %d", i);
// 	}
//	return 0;
//}
//
//
//�ж�����
//int pan_run(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0)|| x % 400 == 0)
//	{ 
//		return 1;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int run = 0;
//	for (run = 1000; run <= 2000; run++)
//	{
//		if (1 == pan_run(run))
//		{
//			printf(" %d", run);
//		}
//	}
//	return 0;
//}
//
//
//���ֲ��ҷ�
//int erzao(int arr[],int i,int zhong)
//{
////	int zhong = sizeof(arr) / sizeof(arr[0]);��Ԫ�ظ���ֻ������������
//	int l = 0;
//	int r = zhong - 1;
//	while(l<=r)
//	{
//		int mid = (l + r) / 2;
//		if (i > arr[mid])
//		{
//			l = mid + 1;
//		}
//		else if (i < arr[mid])
//		{
//			r = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int i = 7;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int zhong = sizeof(arr) / sizeof(arr[0]);//sizeof-�Ǽ����ڲ�Ԫ�ظ���
//	int ret = erzao(arr, i,zhong);
//	
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//
//	}
//	else
//	{
//		printf("�ҵ��ˣ�%d\n", ret);
//	}
//
//
//	return 0;
//}
//
//
//һ��ÿ����iһ�Σ�i�ͻ��1�ĺ���
//void add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int i = 0;
//	add(&i);
//	printf("i = %d\n",i);
//	add(&i);
//	printf("i = %d\n", i);
//	add(&i);
//	printf("i = %d\n", i);
//	return 0;
//}
//
//
//
//int main()
//{
//	int len = 0;
//	len = strlen("abc");//strlen-�����ַ������ȵĺ���
//	printf("%d\n", len);
//	//
//	printf("%d\n", strlen("abc"));
//	printf("%d", printf("%d", printf("%d", 543)));
//
//	return 0;
//}
//
//
//�ݹ����ʽʵ�ִ�ӡһ��������ÿһλ
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//
//
//���ַ�������
//int my_strlen(char* str)
//{
////	int she = 0;
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//	
//		return 0;
////	return she;
//}
//
//int main()
//{
//	char arr[] = "ban tai";
//	int len = my_strlen(arr);
//	printf("�ַ��������ǣ�%d",len);
//	return 0;
//}
//
//
//�׳˵ĵݹ鷽ʽ
//jc(int zhi)
//{
//	if (zhi <= 1)
//		return 1;
//	else
//		return zhi * jc(zhi - 1);
//
//}
//
//int main()
//{
//	int qq = 0;
//	int jie = 0;
//	scanf("%d" ,&qq);
//	jie = jc(qq);
//	printf("%d\n", jie);
//	return 0;
//}
//
//
//���n��쳲��������ݹ鷨��1 1 2 3 5 8 13 21 34 55
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//���n��쳲�������ѭ�����������n��쳲������������ѭ��������ݹ鷨������̫��
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d" ,&n);
//	ret = fib(n);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}
//
//
//�ж�һ�����Ƿ�����
//int main()
//{
//	int run;
//	printf("��������Ҫ�жϵ����: ");
//	scanf("%d", &run);
//
//	if ((run % 4 == 0 && run % 100 != 0) || (run % 400 == 0))
//	{
//		printf("��������� %d\n", run);
//	}
//	else
//	{
//		printf("��������");
//	}
//	return 0;
//}
//
//
//����������ӡ
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr1[%d] = %p\n", i, &arr1[i]);
//	}
//	return 0;
//}
//
//
//��ά����Ĵ�ӡ
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5,6} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for(j=0;j<4;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5,6} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n",i,j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
//
//
//˳�����飬j���ڲ������С�������򣬳�ð������
//void paixu_zhe(int arr[],int sz)
//{
//	int i = 0;
//	for(i=0;i<sz-1;i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {2,4,1,3,6,5,9,7,0,8};
//	int shu = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	paixu_zhe(arr,sz);
//	for (shu = 0; shu < sz; shu++)
//	{
//		printf("%d ",arr[shu]);
//	}
//
//	
//	return 0;
//}
//
//
//��������Ϸ
#include "add.h"
void menu()//��Ϸ��ҳ
{
	printf("**************************\n");
	printf("**** 1.play   0.exit *****\n");
	printf("**************************\n");

}

//������Ϸ���㷨ʵ��
void game()
{
	char ret = 0;
	//����-���������Ϣ
	char board[ROW][COL] = {0};
	//��ʼ������
	IniotBoard(board, ROW, COL);
	//��ӡ����
	DispiayBoard(board, ROW, COL);
	while (1)
	{
		//����������
		PlayerMove(board, ROW, COL);;
		DispiayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = ShiFouYing(board, ROW, COL);
		if (ret == '*')
		{
			printf("���Ӯ\n");
			break;
		}
		else if (ret == 'o')
		{
			printf("ƽ��\n");
			break;
		}
		else if (ret != 'c')
		{
			printf("���ִ���\n");
			break;
		}
		//�����������
		DianNao(board, ROW, COL);
		DispiayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = ShiFouYing(board, ROW, COL);		
		 if (ret == '#')
		{
			printf("����Ӯ\n");
			break;
		}
		else if (ret == 'o')
		{
			printf("ƽ��\n");
			break;
		}
		 if (ret != 'c')
		 {
			 printf("���ִ���\n");
			 break;
		 }
	}
}

void test()//��Ϸ��ѡ��ʵ��
{
	int in = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &in);
		switch (in)
		{
		 case 1:
			 printf("������\n");
			 game();
			break;
		 case 0:
			 printf("�˳���Ϸ\n");
			 break;
		 default:
			 printf("ѡ�����������ѡ��\n");
			 break;
		}
	} while (in);
}

int main()
{
	test();
	return 0;
}


