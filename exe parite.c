#include<stdio.h>
main()
{
	int n,p;
	printf("Entrer un entier:");
	scanf("%d", &n);
	p=n%2;
	if(p==0){
		printf("Le nombre %d est pair", n);
	}
	if(p!=0){
		printf("Le nombre %d est impair", n);
	}
return(0);	
}
