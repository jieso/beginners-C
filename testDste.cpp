#define _CRT_SECURE_NO_WARNINGS 1

#include"test.h"

bool Date::operator == (const Date& d)
{
	if (this != &d)
	{
		return _year == d._year &&
			_month == d._month &&
			_day == d._day;
	}
	return true;
}
bool Date::operator > (const Date& d)
{
	if (this != &d)
	{
		return _year > d._year &&
			_month > d._month &&
			_day > d._day;
	}
	return false;
}
bool Date::operator >= (const Date& d)
{
	return *this == d || *this > d;
}
bool Date::operator < (const Date& d)
{
	return !(*this == d || *this > d);
}
bool Date::operator <= (const Date& d)
{
	return *this == d || *this < d;
}
bool Date::operator != (const Date& d)
{
	return !(*this == d);
}


Date& Date::operator++()
{
	_day += 1;
	if (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
	}
	if (_month == 13)
	{
		_year++;
		_month = 1;
	}
	return *this;
}


Date Date::operator++(int)
{
	Date ret = *this;
	++(*this);
	return ret;
}
Date& Date::operator--()
{
	_day -= 1;
	if (_day ==0)
	{
		_month--;
		if (_month == 0)
		{
			_year--;
			_month = 12;
		}
		_day = GetMonthDay(_year, _month);
	}
	
	return *this;
}
Date Date::operator--(int)
{
	Date ret = *this;
	--(*this);
	return ret;
}
Date Date::operator + (int day)
{
	Date ret = *this;
	ret += day;
	return ret;
}
Date& Date::operator += (int day)
{
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}
	return *this;
}
Date Date::operator - (int day)
{
	Date ret = *this;
	ret -= day;
	return ret; 
}
Date& Date::operator -= (int day)
{
	_day -= day;
	while (_day < 0)
	{
		_month--;
		if (_month == 0)
		{
			_year--;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month);		
	}

	return *this;
}
