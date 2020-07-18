#include "common.h"
#include "phone.h"
#include "screenOut.h"

int numOfData = 0;
phoneData phoneList[LIST_NUM];

void InputPhoneData()
{
	if (numOfData >= LIST_NUM - 1)
	{
		return;
	}
	char name[NAME_LEN];
	printf("이름 : ");
	scanf("%s", name);
	strcpy(phoneList[numOfData].name, name);

	char phoneNum[PHONE_LEN];
	printf("번호 : ");
	scanf("%s", phoneNum);
	strcpy(phoneList[numOfData].phoneNum, phoneNum);

	numOfData += 1;
}

void ShowAllData()
{
	for (size_t i = 0; i < numOfData; i++)
	{
		ShowPhoneInfo(phoneList[i]);
	}
}
