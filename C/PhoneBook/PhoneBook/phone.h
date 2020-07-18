#pragma once
#define NAME_LEN 30
#define PHONE_LEN 30
#define LIST_NUM 100

typedef struct __phoneData
{
	char name[NAME_LEN];
	char phoneNum[PHONE_LEN];
}phoneData;

void InputPhoneData();
void ShowAllData();