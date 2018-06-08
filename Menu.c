#include "Rummikub.h"

int Menu(void)
{
	char escolha;
	int real;

	printf("Bem vindo ao Rummikub!\n\n");
	printf("1 - Jogar\n");
	printf("2 - Sair\n\n");

	printf("Escolha uma opcao: ");
	for(;;)
	{
		fflush(stdin);
		scanf("%c",&escolha);
		real=escolha-'0';
		if(real>0&&real<3)
			{
				break;
			}
		else
		{
			printf("Opcao invalida. Tente novamente: ");
		}

	}
	system("cls");
	return real;
}