#include<stdio.h>
main()
{
	int n,i=1,fact=1;
	printf("Entrer un entier naturel:");
	scanf("%d", &n);
	while(i<=n){
		fact=fact*i;
		i++;
	}
	printf("La factorielle de %d est: %d", n,fact);
	return(0);
}
