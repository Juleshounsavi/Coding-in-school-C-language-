#include<stdio.h>
main()
{
	int i=0,n,s=0;
	printf("Entrer un nombre n:");
	scanf("%d", &n);
	while(i<=n){
		s+=i++;
	}
	printf("La somme des n nombres inferieurs ou egale a %d est: %d",n,s);
	return(0);
}
