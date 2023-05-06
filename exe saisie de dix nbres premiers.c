#include<stdio.h>
main()
{
	int nbre=10;
	int n;
	printf("Entrer dix nombres premiers.....\n");
	do{
		printf("Entrer un nombre:");
		scanf("%d", &n);
			if(n==2 || n==3 || n==5 || n==7){
				nbre--;
				printf("Il vous reste encore %d nombre\n", nbre);
			}
	}
	while(nbre!=0);
	return(0);
}
