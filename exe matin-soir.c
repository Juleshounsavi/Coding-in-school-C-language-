#include<stdio.h>
main()
{
	int h;
	printf("Quelle heure est-il?");
	scanf("%d", &h);
	if(h>=0 && h<12){
		printf("Bonjour.");
	}
	else if(h>12 && h<=23){
		printf("Bonsoir.");
	}
	else{
		printf("Erreur de saisie!");
	}
	return(0);
}
