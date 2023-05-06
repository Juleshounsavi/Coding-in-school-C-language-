#include<stdio.h>
#include<math.h>
main()
{
	int n;
	printf("Entrer un nombre:");
	scanf("%d", &n);
	
	if(n>=0){
		printf("La valeur absolue de %d est %d.\n", n,n);
		printf("La racine carre de %d est %f.", n,sqrt(n));
	}
	else if(n<0){
		printf("La valeur absolue de %d est %d.\n", n,-1*n);
		printf("La racine carre de %d est %f.", n,sqrt(-1*n));
	}
	return(0);
}
