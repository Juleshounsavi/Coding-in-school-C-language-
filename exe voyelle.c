#include<stdio.h>
main()
{
	char x,e,o,i,a,u,y;
	printf("Entrer une voyelle:");
	scanf("%c", &x);
	while(x!='a' && x!='e' && x!='i' && x!='o' && x!='u' && x!='y' ){
		printf("Recommencer la saisie.");
		scanf("%c", &x);		
	}
	return(0);
}




