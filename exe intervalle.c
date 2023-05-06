#include<stdio.h>
main()
{
	int n;
	printf("Entrer un nombre:");
	scanf("%d", &n);
	if(n>=-9 && n<=15){
		printf("%d appartient a [-9;15].", n);
	}
	else{
		printf("%d n'appartient pas a [-9;15].", n);
	}
	return(0);
}
