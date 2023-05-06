#include<stdio.h>
main()
{
	int a,b,c;
	float D;
	printf("Entrer les coefficients de l'equation:");
	scanf("%d %d %d",&a,&b,&c);
	printf("a=%d b=%d c=%d\n", a,b,c);
	D=b*b-4*a*c;
	if(D>0){
		printf("On a deux solutions distinctes.");
	}
	else if(D<0){
		printf("On a pas de solution dans R.");
	}
	else if(D==0){
		printf("On a une solution double.");
	}
return(0);	
}
