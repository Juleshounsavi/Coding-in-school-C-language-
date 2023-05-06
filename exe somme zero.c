#include<stdio.h>
main()
{
	int n,nbre,somme=0,i;
	printf("Combien de nombres voulez-vous additionner?");
	scanf("%d", nbre);
	i=0;
	do{
		printf("Entrer un nombre(zero pour arret):");
		scanf("%d", &n);
		somme=somme+n;
		i++;
	}
	while(i<nbre && nbre!=0);
	printf("La somme est: %d", somme);
	return(0);
}
