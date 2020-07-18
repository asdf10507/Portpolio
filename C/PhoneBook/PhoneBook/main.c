#include "common.h"
#include "screenOut.h"
#include "phone.h"

enum
{
	INPUT = 1,
	SHOWALL,
	QUIT
};

int main()
{
	int inputMenu = 0;
	while (TRUE)
	{
		ShowMenu();
		fputs("선택하세요 : ", stdout);
		scanf("%d", &inputMenu);
		fflush(stdin);

		switch (inputMenu)
		{
			case INPUT:
				InputPhoneData();
				break;
			case SHOWALL:
				ShowAllData();
				break;
		}

		if (inputMenu == QUIT)
		{
			puts("이용해 주셔서 고마워요~");
			break;
		}
	}

	return 0;
}