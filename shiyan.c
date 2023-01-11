#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<string.h>
//#include<windows.h>//使用Sleep所需要引用的头文件
//#include<stdlib.h>//引用cls清空屏幕所使用的头文件；引用rand-生成随机数指令,引用system()执行系统命令
//#include<math.h>//使用sqrt - 开平方库函数
//#include<time.h>
//#include<string.h>//引用strcmp比较字符串函数
//static静态变量指令，其功能是赋予变量有常量特性，且不能被外部文件声明调用
// sizeof 是计算char arr4所占空间的大小，算上\0，能计算变量、数组、类型的大小-单位是字节-是操作符
// strlen是求字符串长度的大小，且只能求字符串的长度-是库函数-得引用头文件
// stack overflow__是栈溢出
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
//	printf("你会去敲代码吗？(选择yes or no) :>");
//	scanf("%s", &coding);
//	if (strcmp(coding, "yes") ==0)
//	{
//		printf("成功，走上人生巅峰\n");
//	}
//	else
//	{
//		printf("不去就去卖咸鸭蛋\n");
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
 //书名属性等的编写程序
//struct Book
//{
//	char name[20];
//	short prince;
//};
//int main()
//{
//	struct Book b1 = { "c语言程序设计",55 };
//	strcpy(b1.name, "c++");
//	printf("%s\n", b1.name);
	//struct Book* pd = &b1;
	//printf("%s\n", pd->name);
	//printf("%d\n", pd->prince);
	//printf("书名:%s\n", b1.name);
	//printf("价格:%d元\n", b1.prince);
	//b1.prince = 15;
	//printf("修改后的价格:%d\n", b1.prince);
//	return 0;
//}
// 
// if的无限套娃程序
//int main()
//{
//	//int age = 1;
//	//if (age < 18)
//	//{
//	//	printf("不能谈\n");
//	//	printf("未成年\n");
//	//}
//	//else if (age >= 18 && age < 28)
//	//	printf("青年\n");
//	//else if (age >= 28 && age < 50)
//	//	printf("壮年\n");
//	//else if (age >= 50 && age < 90)
//	//	printf("老年\n");
//	//else
//	//	printf("老不死\n");//else只会和离它最近的if匹配,
//	//一个等号是赋值两个等号是判断相等
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
//星期一到星期天的排序程序，称Switch语句
	//int day = 0;
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1:
	//	printf("星期一\n");
	//	break;
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;
	//case 4:
	//	printf("星期四\n");
	//	break;
	/*case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		printf("去旅游\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}*/
//
// 
// 循环系统
	//int i = 1;
	//while(i<=10)
	//{
	//	if (i <= 5)
	//		continue;//跳过下面程序回到上面继续循环
	//		printf("%d", i);
	//	i++;
	//}
	//int ch = 0;
	////ctrl+z退出循环
	////EOF = end of file ->-1
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	/*}*/

//输入密码程序
	//int ret = 0;
	//int ch = 0;
	//char mima[20] = { 0 };
	//printf("请输入密码:>");//变量输入有一个数据缓冲区，如不及时消除会被下一个程序读取，回车键等于/
	//scanf("%s",mima);
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}
	//printf("请确认（Y/N):>");
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("确认通过\n");
	//}
	//else
	//{
	//	printf("取消确认\n");
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

//指令for与if的运用
		//int i;
		//for (i = 0; i < 11; i++)
		//{
		//	if (i == 5)
		//		break;//此指令代表跳出循环，在for和if里面作用一样
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

//找n的奇数代码
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
//      "查找数组数字程序",二分查找法
	//int arr[] = { 1,2,3,4,5,6,8,9,10 };
	//int k = 7;
	//int sz = sizeof(arr)/sizeof(arr[0]);
	//int left = 0;
	//int right = sz - 1;
	////printf("请输入你要查找的数字:");
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
	//		printf("找到了，下标是：%d\n", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("找不到\n");
	//}
//
// 
//演示多个字符从两端移动，向中间汇聚。

//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
////	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//sizeof是求char所占用的字节数
//	int right = strlen(arr1)-1;//strlen是求char里面的字符串个数包括\0
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);//s是打印英文的
//		Sleep(500);//毫秒是单位1000毫秒等于1秒
//		system("cls");//执行系统命令的一个函数,cls是清空屏幕
//		left++;
//		right--;	
//	}
	//printf("%s\n", arr2);
//
//
//密码登录程序

		//int i = 0;
		//char mima[20] = {0};
		//for(i=0; i<3; i++)
		//{
		//	printf("请输入密码:>");
		//	scanf("%s", mima);
		//	if (strcmp(mima,"123456") == 0)//==不能用来比较两个字符串是否相等，应该使用一个库函数 strcmp
		//	{
		//		printf("登录成功\n");
		//		break;
		//	}
		//	else
		//	{
		//		printf("密码错误\n");
		//	}
		//}
		//if (i == 3)
		//	printf("三次密码均错误，请退出程序\n");
//
//
//三个数从大到小排序程序

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
// 获取3的倍数代码			
			//int i;
			//for (i = 1; i <= 100; i++) 
			//{
			//	if (i % 3 == 0)//%在这代码里是整除的意思意思i能整除3获得数就是0
			//		printf(" %d", i);
			//}
	//
	// 
	// 求取任意两数最大公因数程序
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
			// 打印一千到两千年之间闰年的程序
			// 方法1
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
	// 方法2
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
	//		printf("\n年数=%d\n", nian);
	//		return 0;
 //}
//
//
//素数的筛选程序，也叫试除法
//sqrt - 开平方的数字库函数
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
//找出100以内9的个数
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
// 分数求和
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
//	printf(" %lf",q );//%lf是打印浮点数
//	return 0;
//}
//
//
// 
// 求出最大值
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
//		printf("最大数= %d", zd);
//	}
//	return 0;
//}
//
//
//乘法口诀表打印
//int main()
//{
//	int x = 0;
//	
//	for (x = 1; x<= 9; x++)
//	{   
//		int y = 1;
//		for (y = 1; y <= x; y++)
//		{
//		 printf(" %d*%d=%-2d ", y,x,x*y);//%2d的意思是预留两位打印空间，%-2d的意思是向左预留两位
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//
//
//猜数字程序知识点，rand-srand
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
//	ret = rand()%100+1;//生成一个随机数的一个函数
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &shu);
//		if (shu > ret && shu<=100)
//		{
//			printf("猜大了\n");
//		}
//		else if (shu < ret && shu>=0)
//		{
//			printf("猜小了\n");
//		}
//		
//		else if (shu ==ret)
//		{
//			printf("恭喜，猜对了\n");
//			break;
//
//		}
//        else if (shu!=1)
//		{
//			printf("输入错误请重新输入\n");
//			game();
//		}
//	}
//		
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//拿时间戳生成随机值
//	int lun = 0;
//	do
//	{
//		kai();
//		printf("请选择>：");
//		scanf("%d", &lun);
//		switch (lun)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (lun);
//
//	return 0;
//}
//
//
//strlen求字符串长度函数
//关机程序,电脑搜索cmd打开执行程序窗口

//int main()
//{
//	char wenzi[20] = { 0 };
//	system("shutdown -s -t 60");//systen()-执行系统命令的
//	again:
//	printf("请注意，你的电脑会在60秒内关机，如取消关机输入：取消\n请输入>:");
//	scanf("%s", &wenzi);//%s是打印字符指令
//	if (strcmp(wenzi, "取消")==0)//strcmp()是专门用来比较两个字符串的函数
//
//	{
//		system("shutdown -a");//shutdown -a取消关机指令
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
//	//strcpy()字符串拷贝-头文件string.h
//	char arr[] ="hello world";
//	memset(arr, '*', 5);//传递过去的是ascll码 值
//	printf("%s\n", arr);
//	return 0;
//}
//
///
//
//
//void huan(int* pa, int* pb)//调换数据函数
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
//	printf("原数%d %d\n", a, b);
//	huan(&a, &b);
//	printf("变数%d %d\n", a, b);
//	return 0;
//}
//
//判断素数
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
//判断闰年
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
//二分查找法
//int erzao(int arr[],int i,int zhong)
//{
////	int zhong = sizeof(arr) / sizeof(arr[0]);求元素个数只能在主函数内
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
//	int zhong = sizeof(arr) / sizeof(arr[0]);//sizeof-是计算内部元素个数
//	int ret = erzao(arr, i,zhong);
//	
//	if (ret == -1)
//	{
//		printf("找不到\n");
//
//	}
//	else
//	{
//		printf("找到了：%d\n", ret);
//	}
//
//
//	return 0;
//}
//
//
//一个每调用i一次，i就会加1的函数
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
//	len = strlen("abc");//strlen-是求字符串长度的函数
//	printf("%d\n", len);
//	//
//	printf("%d\n", strlen("abc"));
//	printf("%d", printf("%d", printf("%d", 543)));
//
//	return 0;
//}
//
//
//递归程序方式实现打印一个整数的每一位
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
//求字符串个数
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
//	printf("字符串个数是：%d",len);
//	return 0;
//}
//
//
//阶乘的递归方式
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
//求第n个斐波那契数递归法：1 1 2 3 5 8 13 21 34 55
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//求第n个斐波那契数循环法：￡求第n个斐波那契数会采用循环法，因递归法计算量太大
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
//判断一个数是否闰年
//int main()
//{
//	int run;
//	printf("请输入你要判断的年份: ");
//	scanf("%d", &run);
//
//	if ((run % 4 == 0 && run % 100 != 0) || (run % 400 == 0))
//	{
//		printf("这个是闰年 %d\n", run);
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//	return 0;
//}
//
//
//数组的逐个打印
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
//二维数组的打印
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
//顺序数组，j将内部数组从小到大排序，称冒泡排序
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
//三子棋游戏
#include "add.h"
void menu()//游戏首页
{
	printf("**************************\n");
	printf("**** 1.play   0.exit *****\n");
	printf("**************************\n");

}

//整个游戏的算法实现
void game()
{
	char ret = 0;
	//数组-存放棋盘信息
	char board[ROW][COL] = {0};
	//初始化棋盘
	IniotBoard(board, ROW, COL);
	//打印棋盘
	DispiayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋程序
		PlayerMove(board, ROW, COL);;
		DispiayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = ShiFouYing(board, ROW, COL);
		if (ret == '*')
		{
			printf("玩家赢\n");
			break;
		}
		else if (ret == 'o')
		{
			printf("平局\n");
			break;
		}
		else if (ret != 'c')
		{
			printf("出现错误\n");
			break;
		}
		//电脑下棋程序
		DianNao(board, ROW, COL);
		DispiayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = ShiFouYing(board, ROW, COL);		
		 if (ret == '#')
		{
			printf("电脑赢\n");
			break;
		}
		else if (ret == 'o')
		{
			printf("平局\n");
			break;
		}
		 if (ret != 'c')
		 {
			 printf("出现错误\n");
			 break;
		 }
	}
}

void test()//游戏的选择实现
{
	int in = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &in);
		switch (in)
		{
		 case 1:
			 printf("三子棋\n");
			 game();
			break;
		 case 0:
			 printf("退出游戏\n");
			 break;
		 default:
			 printf("选择错误，请重新选择！\n");
			 break;
		}
	} while (in);
}

int main()
{
	test();
	return 0;
}


