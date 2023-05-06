#include<stdio.h>
main()
{
	int i,n,s=0;
	printf("Entrer un nombre n:");
	scanf("%d", &n);
	for(i=0;i<=n;i++){
		s=s+i;
	}
	printf("La somme des n entiers inferieurs ou egale a %d est: %d",n,s);
	return(0);
}
