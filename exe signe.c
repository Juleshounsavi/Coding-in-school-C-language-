#include<stdio.h>
main()
{
	float x;
	printf("Entrer un nombre:");
	scanf("%f", &x);
	if(x<0){
		printf("Ce nombre est negatif.");
	}
	else if(x>0){
		printf("Ce nombre est positif.");
	}
	else{
		printf("Erreur de saisie!");
	}
	return(0);
}
