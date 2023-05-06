#include<stdio.h>
main()
{
	int x,n,i=0,s=0,p=1;
	float moy;
	printf("Combien de nombres voulez-vous manipuler?");
	scanf("%d", &n);
	while(i<n){
		printf("Entrer les nombres:");
		scanf("%d",&x);
		i++;
		s=s+x;
		p=p*x;
	}
	moy=s/n;
	printf("La somme des nombres est:%d\n",s);
	printf("Le produit des nombres est:%d\n",p);
	printf("La moyenne des nombres est:%f\n",moy);
	return(0);
}
