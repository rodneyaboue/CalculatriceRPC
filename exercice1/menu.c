#include <stdio.h>
static int try=-1;
int menu()
{
	
	int valeur=0;
	printf("\t 1->ALLUMER LA CALCULATRICE\n");
	printf("\t 2->AJOUTER UN NOMBRE \n");
	printf("\t 3->SOUSTRAIRE UN NOMBRE\n");
	printf("\t 4->MULTIPLIER UN NOMBRE\n");
	printf("\t 5->MEMORISER VOTRE RESULTAT\n");
	printf("\t 6->EXTRAIT UNE VALEUR\n");
	printf("\t 7->ETEINDRE LA CALCULATRICE\n");
	do
	{
		printf("Entrez votre choix ...\n");
		scanf("%d",&valeur);
		try ++;		
		if (try==0 && valeur!=1 )
		{
			printf("Vous devez allumer la calculatrice\n");
			try=-1;
		}
		
	} while (valeur <1 || valeur>7);
	printf("%d\n",valeur);
	
	return valeur;
}

int main()
{
	printf("---------------------------------------------\n");
	printf("Bienvenue dans calculatrice\n\n");
	int minitry=0;
	printf("Premier\n");
	do
	{
		minitry=menu();
	} while (minitry!=1);
	
	printf("Deuxieme\n");
	menu();
	//menu();
	return 0;
}
