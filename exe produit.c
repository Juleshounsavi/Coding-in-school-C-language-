#include<stdio.h>
main()
{
	int x,y;
	printf("Entrer deux nombres entiers:");
	scanf("%d %d", &x,&y);
	printf("x=%d y=%d\n",x,y);
	if(x>0 && y>0){
		printf("Le produit est positif.");
	}
	else if(x>0 && y<0){
		printf("Le produit est negatif.");
	}
	else if(x<0 && y>0){
		printf("Le produit est negatif.");
	}
	else if(x<0 && y<0){
		printf("Le produit est positif.");
	}
	else if((x==0 && y==0)||(x==0 && y!=0)||(x!=0 && y==0)){
		printf("Le produit est nul.");
	}
	else{
		printf("Erreur de saisie!");
	}
	return(0);
}
