#include "common.h"
#include "screenOut.h"

void ShowMenu()
{
	system("cls");

	printf("�޴�\n");
	printf("1. ��ȭ��ȣ �Է�\n");
	printf("2. ��ü ���� ���\n");
	printf("3. ����\n");
	printf("����>>\n");
}

void ShowPhoneInfo(phoneData phone)
{
	printf("===============================\n");
	printf("�̸� : %s\n", phone.name);
	printf("��ȣ : %s\n", phone.phoneNum);
	printf("===============================\n");
}
