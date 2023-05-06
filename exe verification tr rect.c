#include<stdio.h>
main()
{
	int x,y,z;
	printf("Entrer la longueur du cote oppose:");
	scanf("%d", &x);
	printf("Entrer la longueur du cote adjacent:");
	scanf("%d", &y);
	printf("Entrer la longueur de l'hypotenus:");
	scanf("%d", &z);
	if(x*x+y*y==z*z && x!=0 && y!=0 && z!=0){
		printf("Il s'agit d'un triangle rectangle.");
	}
	else{
		printf("Ce n'est pas un triangle rectangle.");
	}
	return(0);
}
