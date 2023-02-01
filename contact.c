#define _CRT_SECURE_NO_WARNINGS 1


#include"contact.h"

void InitContact(struct Contact* ps)
{
	//初始化通讯录
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//设置通讯录最初只有0个元素
}
//添加联系人
void Addcontact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满，无法增加\n");
	}
	else
	{
		printf("请输入名字:>\n");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:>\n");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别:>\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:>\n");
		scanf("%s", ps->data[ps->size].telr);
		printf("请输入地址:>\n");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}

//查找联系人
static int FindByName(const struct Contact* ps,char name[MAX_NAME])
{
	int i;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

//删除联系人
void Delcontact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除人的名字:");
	scanf("%s", name);
	//查找要删除的人在什么位置
	//专门用于查找的自定义函数，找到返回该元素下标，找不到返回-1
	int pos = FindByName(ps, name);
	//删除
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除数据
		int j;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

//查找联系人信息并打印出来
void Searchcontact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字：");
		scanf("%s", name);
		int pos = FindByName(ps, name);
		if (pos == -1)
		{
			printf("要查找的联系人不存在");
		}
		else
		{
			printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\n", "名字", "年龄", "性别", "电话", "地址");  
			printf("%-20s\t %-4d\t %-5s\t %-12s\t %-20s\n",
					ps->data[pos].name,
					ps->data[pos].age,
					ps->data[pos].sex,
					ps->data[pos].telr,
					ps->data[pos].addr);
		}
}

//打印联系人信息
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t %-4d\t %-5s\t %-12s\t %-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].telr,
				ps->data[i].addr);
		}
	}
}

//修改指定的联系人信息
void Modifycontact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改人的名字");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要修改的联系人信息不存在\n");
	}
	else
	{
		printf("请输入名字:>\n");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:>\n");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别:>\n");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:>\n");
		scanf("%s", ps->data[pos].telr);
		printf("请输入地址:>\n");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功\n");
	}
}
