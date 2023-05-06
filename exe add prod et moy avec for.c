#include<stdio.h>
main()
{
	int x,n,i=0,s=0,p=1;
	float moy;
	printf("Combien de nombres voulez-vous manipuler?");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Entrer un nombre:");
		scanf("%d",&x);
		s=s+x;
		p=p*x;
	}
	moy=s/n;
	printf("La somme des nombres est:%d\n",s);
	printf("Le produit des nombres est:%d\n",p);
	printf("La moyenne des nombres est:%f\n",moy);
	return(0);
}
