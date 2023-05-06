#include<stdio.h>
main()
{
	int n;
	printf("Entrer un nombre:");
	scanf("%d", &n);
	while(!(n%2!=0 && n>=1 && n<=10)){
		printf("Recommencer la saisie.");
		scanf("%d", &n);
	}
	return(0);
}

