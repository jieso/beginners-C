#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>

enum SJ//ͨѶ¼�ĳ���ֵ�趨
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

//������ͨѶ¼
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];//�Ա�
	char telr[MAX_TELR];//�绰
	char addr[MAX_ADDR];//��ַ
};

//ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];//����һǧ�˵���Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ�������¼��ǰͨѶ¼�ж��ٸ��˵���Ϣ
};

//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps);
//���ͨѶ¼��Ϣ
void Addcontact(struct Contact* ps);
//��ӡͨѶ¼
void ShowContact(const struct Contact* ps);
//ɾ��ָ������ϵ��
void Delcontact(struct Contact* ps);
//����ָ����ϵ�˵���Ϣ
void Searchcontact(const struct Contact* ps);
//�޸�ָ������ϵ����Ϣ
void Modifycontact(struct Contact* ps);
//����ͨѶ¼����
void Sortcontact(struct Contact* ps);