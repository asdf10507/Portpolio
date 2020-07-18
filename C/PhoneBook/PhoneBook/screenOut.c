#include "common.h"
#include "screenOut.h"

void ShowMenu()
{
	system("cls");

	printf("메뉴\n");
	printf("1. 전화번호 입력\n");
	printf("2. 전체 정보 출력\n");
	printf("3. 종료\n");
	printf("선택>>\n");
}

void ShowPhoneInfo(phoneData phone)
{
	printf("===============================\n");
	printf("이름 : %s\n", phone.name);
	printf("번호 : %s\n", phone.phoneNum);
	printf("===============================\n");
}
