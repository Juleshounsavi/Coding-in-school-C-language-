#include<stdio.h>
main()
{
	int c1, c2;
	float n1,n2,moy;
	printf("Entrer les valeurs des deux notes:\n");
	scanf("%f &f", &n1,&n2);
	printf("Entrer les coefficients:\n");
	scanf("%d %d", &c1,&c2);
	moy=(c1*n1+c2*n2)/2;
	printf("Moyenne:%f\n", moy);
	if(moy>=10){
		printf("Valide");
	}
	else if(moy>=5 && moy<10){
		printf("Rattrapage");
	}
	else if(moy<5 && moy>0){
		printf("Non valide");
	}
return(0);	
}
