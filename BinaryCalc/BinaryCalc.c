#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int zahl, basis, zaehler = 0, i;
	int ziel[100];

	while (1)
	{
		printf("Gib Basis des Zielsystem ein (2<=Basis<=10): ");
		scanf("%d", &basis);
		if (basis >= 2 && basis<= 10);
		break;
	}

	printf("Gib die zu wandelnde Zahl aus dem Zehnersystem ein: ");
	scanf("%d", &zahl);
	printf("    ---> %d(10) = ", zahl);
	while (zahl > 0)
	{
		ziel[zaehler] = zahl % basis;
		zahl /= basis;
		++zaehler;
	}
	for (i = zaehler - 1; i >= 0; i--)
	{
		printf("%d", ziel[i]);
	}
		printf("(%d)\n", basis);
		system("pause");
		return 0;
}