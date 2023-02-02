#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void menu()
{
	printf("****************************************\n");
	printf("****** 1.add             2.del    ******\n");
	printf("****** 3.search          4.modify ******\n");
	printf("****** 5.show            6.sort   ******\n");
	printf("******           0.exit           ******\n");
	printf("****************************************\n");
}

int main()
{
	int input = 0;
	//通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			Addcontact(&con);
			break;
		case Del:
			Delcontact(&con);
			break;
		case Search:
			Searchcontact(&con);
			break;
		case Modify:
			Modifycontact(&con);
			break;
		case Show:
		    Showcontact(&con);
			break;
		case Sort:
			Sortcontact(&con);
			Showcontact(&con);
			break;
		case Exit:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
		//system("cls");//清屏
	} while (input);
	return 0;
}