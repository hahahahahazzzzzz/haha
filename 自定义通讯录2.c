#define _CRT_SECURE_NO_WARNINGS  1
#include "contact.h"
#include <string.h>


void meun()
{
	printf("***********************************\n");
	printf("*****1.add**********2.del**********\n");
	printf("*****3.search*******4.modify*******\n");
	printf("*****5.show*******6.sort***********\n");
	printf("************0.exit*****************\n");
}

void initcontact(struct contact* ps)
{
	memset(ps->date, 0, sizeof(ps->date));
	ps->size = 0;
}



void addcontact(struct contact* ps)
{
	if (ps->size == max)
	{
		printf("通讯录已满，无法添加\n");
	}
	else
	{
		printf("请输入姓名：");
		scanf("%s", ps->date[ps->size].name);
		printf("请输入年龄：");
		scanf("%d", &ps->date[ps->size].age);
		printf("请输入性别：");
		scanf("%s", ps->date[ps->size].sex);
		printf("请输入电话号码：");
		scanf("%s", ps->date[ps->size].tele);
		printf("请输入居住地：");
		scanf("%s", ps->date[ps->size].home);
		ps->size++;
		printf("添加成功\n");
	}
}
int findbyname(struct contact* ps, char name[max_name])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(name, ps->date[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void delcontact(struct contact* ps)
{
	char name[max_name];
	printf("请输入删除人姓名：");
	scanf("%s", name);
	int ret=findbyname(ps, name);
	if (ret==-1)
	{
		printf("通讯录中没有此人\n");
	}
	else
	{
		int j = 0;
		for (j = ret; j < (ps->size)-1; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void searchcontact(struct contact* ps)
{
	char name[max_name];
	printf("请输入查找人姓名：");
	scanf("%s", name);
	int ret = findbyname(ps, name);
	if (ret == -1)
	{
		printf("找不到此人信息\n");
	}
	else
	{
		printf("%-10s\t%-10s\t%-8s\t%-20s\t%-15s\n", "姓名", "年龄", "性别", "电话号码", "居住地");
		printf("%-10s\t%-10d\t%-8s\t%-20s\t%-15s\n",
			ps->date[ret].name,
			ps->date[ret].age,
			ps->date[ret].sex,
			ps->date[ret].tele,
			ps->date[ret].home);
	}
}
void modifyforname(struct contact* ps,int ret)
{
	char name[max_name];
	printf("输入修改后的姓名：");
	scanf("%s", name);
	strcpy(ps->date[ret].name, name);
	printf("修改完成\n");
}

void modifyforage(struct contact* ps, int ret)
{
	int age = 0;
	printf("输入修改后的年龄：");
	scanf("%d", &age);
	ps->date[ret].age = age;
	printf("修改完成\n");
}


void modifyforsex(struct contact* ps, int ret)
{
	char sex[max_sex];
	printf("输入修改后的性别：");
	scanf("%s", sex);
	strcpy(ps->date[ret].sex, sex);
	printf("修改完成\n");
}
void modifyfortele(struct contact* ps, int ret)
{
	char tele[max_tele];
	printf("修改后的电话：");
	scanf("%s", tele);
	strcpy(ps->date[ret].tele, tele);
	printf("修改完成\n");
}
void modifyforhome(struct contact* ps, int ret)
{
	char home[max_home];
	printf("修改后的电话：");
	scanf("%s", home);
	strcpy(ps->date[ret].home, home);
	printf("修改完成\n");
}
void modifycontact(struct contact* ps)
{
	int input = 0;
	char name[max_name];
	printf("输入需要修改信息人的姓名：");
	scanf("%s", name);
	int ret = findbyname(ps, name);
	do
	{
		printf("请选择需要修改的字段:1.姓名*****2.年龄*******3.性别************\n");
		printf("*********************4.电话号码********5.居住地******0.退出****\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			modifyforname(ps,ret);
			break;
		case 2:
			modifyforage(ps, ret);
			break;
		case 3:
			modifyforsex(ps, ret);
			break;
		case 4:
			modifyfortele(ps, ret);
			break;
		case 5:
			modifyforhome(ps, ret);
			break;
		case 0:
			printf("取消修改\n");
			break;
		default:
			printf("输入错误，请重新选择：");
			break;
		}

	} while (input);
}




void showcontact(const struct contact* ps)
{
	printf("%-10s\t%-10s\t%-8s\t%-20s\t%-15s\n", "姓名", "年龄", "性别", "电话号码", "居住地");
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%-10s\t%-10d\t%-8s\t%-20s\t%-15s\n",
			ps->date[i].name,
			ps->date[i].age,
			ps->date[i].sex,
			ps->date[i].tele,
			ps->date[i].home);                               
	}
}


void soprtcontact(struct contact* ps)
{
	struct contact tmp;
	initcontact(&tmp);
	struct contact* ps1 = &tmp;
	int i = 0;
	for (i = 0; i < ps->size-1; i++)
	{
		int j = 1;
		for (j = 0; j <ps->size-i-1; j++)
		{
			int ret = strcmp(ps->date[j].name, ps->date[j+1].name);
			if (ret > 0)
			{
				ps1->date[j] = ps->date[j];
				ps->date[j] = ps->date[j + 1];
				ps->date[j + 1] = ps1->date[j];
			}
		}
	}
	printf("排序完成\n");
}
