#define _CRT_SECURE_NO_WARNINGS 1

#pragma once//避免头文件多次展开
#include"test.h"


//void Add(int i, int j)
//{
//	cout << i <<" " << j << endl;
//}
//
//void Add(char &i,char j)
//{
//	cout << i<<" " << &j << endl;
//}
//
//void Swap(int& r1, int& r2)
//{
//	int tmp = r1;
//	r1 = r2;
//	r2 = tmp;
//}
//
//void test(int& i, int j = 10, int z = 10)
//{
//	i = 10;
//	cout << i + j + z << endl;
//}
//
//int& test2(int* data,int x)
//{
//	return data[x];
//}



int main()
{
	Date d1(2001,1,1);
	Date d2(2,2,2);
	Date d3(d2);
	(d1 - 4).print();
	(d1 - 40).print();
	(d1 - 400).print();
	(d1 + 40000).print();
	//d1 = d2=d3;
	//Date d3(d2);
	//Date d4;
	//d1 -= 30;
	//d1 -= 3;
	//d1.print();
	//d2.print();
	//d3.print(); 
 	return 0;
  }