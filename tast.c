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
		case 1:
			Addcontact(&con);
			Sleep(300);
			break;
		case 2:
			Delcontact(&con);
			Sleep(500);
			break;
		case 3:
			Searchcontact(&con);
			break;
		case 4:
			Modifycontact(&con);
			break;
		case 5:
		ShowContact(&con);
		Sleep(5000);
			break;
		case 6:
			break;
		case 0:
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