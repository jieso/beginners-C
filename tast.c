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
	//ͨѶ¼
	struct Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
		//system("cls");//����
	} while (input);
	return 0;
}