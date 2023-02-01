#define _CRT_SECURE_NO_WARNINGS 1


#include"contact.h"

void InitContact(struct Contact* ps)
{
	//��ʼ��ͨѶ¼
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//����ͨѶ¼���ֻ��0��Ԫ��
}
//�����ϵ��
void Addcontact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷�����\n");
	}
	else
	{
		printf("����������:>\n");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:>\n");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�:>\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:>\n");
		scanf("%s", ps->data[ps->size].telr);
		printf("�������ַ:>\n");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}
}

//������ϵ��
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

//ɾ����ϵ��
void Delcontact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:");
	scanf("%s", name);
	//����Ҫɾ��������ʲôλ��
	//ר�����ڲ��ҵ��Զ��庯�����ҵ����ظ�Ԫ���±꣬�Ҳ�������-1
	int pos = FindByName(ps, name);
	//ɾ��
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//ɾ������
		int j;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

//������ϵ����Ϣ����ӡ����
void Searchcontact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵����֣�");
		scanf("%s", name);
		int pos = FindByName(ps, name);
		if (pos == -1)
		{
			printf("Ҫ���ҵ���ϵ�˲�����");
		}
		else
		{
			printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");  
			printf("%-20s\t %-4d\t %-5s\t %-12s\t %-20s\n",
					ps->data[pos].name,
					ps->data[pos].age,
					ps->data[pos].sex,
					ps->data[pos].telr,
					ps->data[pos].addr);
		}
}

//��ӡ��ϵ����Ϣ
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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

//�޸�ָ������ϵ����Ϣ
void Modifycontact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸��˵�����");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ���ϵ����Ϣ������\n");
	}
	else
	{
		printf("����������:>\n");
		scanf("%s", ps->data[pos].name);
		printf("����������:>\n");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�:>\n");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:>\n");
		scanf("%s", ps->data[pos].telr);
		printf("�������ַ:>\n");
		scanf("%s", ps->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}
