#pragma once

#include<iostream>
using std::cout;
using std::endl;

class Date
{
public:
	//构造函数
	Date(int year = 2000, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
		//cout << "11" << endl;
	}
	//打印
	void print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	//拷贝构造
	//Date(Date& d)
	//{
	//	_year = d._year;
	//	_month = d._month;
	//	_day = d._day;
	//	//cout << "22" << endl;
	//}
	//析构函数
	//~Date()
	//{
	//	_year = 0;
	//	_month = 0;
	//	_day = 0;
	//	//cout << "33" << endl;
	//}
	//Date& operator=(const Date& d)
	//{
	//	if (this != &d)
	//	{
	//		_year = d._year;
	//		_month = d._month;
	//		_day = d._day;
	//	}
	//	return *this;
	//}
	int GetMonthDay(int year, int month)
	{
		static int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		{
			return 29;
		}
		return day[month];
	}
	bool operator == (const Date & d);
	bool operator > (const Date& d);
	bool operator >= (const Date& d);
	bool operator < (const Date& d);
	bool operator <= (const Date& d);
	bool operator != (const Date& d);
	Date& operator++();
	Date operator++(int);
	Date& operator--();
	Date operator--(int);
	Date operator + (int day);
	Date& operator += (int day);
	Date operator - (int day);
	Date& operator -= (int day);
	
private:
	int _year;
	int _month;
	int _day;
};