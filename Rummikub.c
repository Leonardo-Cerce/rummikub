#include "Rummikub.h"

int main(int argc, char const *argv[])
{
	Splash();
	switch(Menu())
	{
		case 1:
		{
			printf("Entao voce quer jogar, nao eh mesmo? Pois nao vai.\n\n");
			system("pause");
			break;
		}
		case 2:
		{
			printf("Encerrando...\n\n");
			system("pause");
			break;
		}
	}
	return 0;
}