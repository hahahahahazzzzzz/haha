#define _CRT_SECURE_NO_WARNINGS  1
#define max 1000
#define max_name 10
#define max_sex 10
#define max_tele 20
#define max_home 20
#include <stdio.h>
#include <string.h>
void meun();
struct mems
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char home[max_home];
};
struct contact
{
	struct mems date[max];
	int size;
};


int findbyname(struct contact* ps, char name[max_name]);


void modifyforname(struct contact* ps,int ret);
void modifyforage(struct contact* ps, int ret);
void modifyforsex(struct contact* ps,int ret);
void modifyfortele(struct contact* ps, int ret);
void modifyforhome(struct contact* ps, int ret);


void initcontact(struct contact* ps);
void addcontact(struct contact* ps);
void showcontact(const struct contact* ps);
void delcontact(struct contact* ps);
void searchcontact(struct contact* ps);
void modifycontact(struct contact* ps);
void soprtcontact(struct contact* ps);