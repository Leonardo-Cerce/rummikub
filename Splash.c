#include "Rummikub.h"

void Splash(void)
{
	FILE *Arq;
	char imagem[96];
	Arq=fopen("imagem.txt","rt");
	while(fgets(imagem,sizeof(imagem),Arq)!=NULL)
	{
		printf("%s",imagem);
	}
	sleep(4);
	printf("\n\n\n");
	fclose(Arq);
	system("cls");
}