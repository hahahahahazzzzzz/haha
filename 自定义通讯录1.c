define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include "contact.h"
int main()
{
	struct contact con;
	initcontact(&con);
	
	int input = 0;
	do
	{
		meun();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			addcontact(&con);
			break;
		case 2:
			delcontact(&con);
			break;
		case 3:
			searchcontact(&con);
			break;
		case 4:
			modifycontact(&con);
			break;
		case 5:
			showcontact(&con);
			break;
		case 6:
			soprtcontact(&con);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误，请重新输入->");
			break;
		}
	} while(input);

	return 0;
}