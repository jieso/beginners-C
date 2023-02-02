#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>

enum SJ//通讯录的常量值设定
{
	MAX = 1001,
	MAX_NAME = 20,
	MAX_SEX = 5,
	MAX_TELR = 20,
	MAX_ADDR = 30,
	Exit = 0,
	Add,
	Del,
	Search,
	Modify,
	Show,
	Sort
};

//创建的通讯录
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];//性别
	char telr[MAX_TELR];//电话
	char addr[MAX_ADDR];//地址
};

//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];//容纳一千人的信息
	int size;//记录当前已经有的元素个数，记录当前通讯录有多少个人的信息
};

//初始化通讯录
void InitContact(struct Contact* ps);
//添加通讯录信息
void Addcontact(struct Contact* ps);
//打印通讯录
void ShowContact(const struct Contact* ps);
//删除指定的联系人
void Delcontact(struct Contact* ps);
//查找指定联系人的信息
void Searchcontact(const struct Contact* ps);
//修改指定的联系人信息
void Modifycontact(struct Contact* ps);
//排序通讯录内容
void Sortcontact(struct Contact* ps);