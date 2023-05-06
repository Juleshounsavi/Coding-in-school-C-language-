#include<stdio.h>
main()
{
	int a,b;
	int ch;
	printf("Entrer deux nombres:");
	scanf("%d %d",&a,&b);
	printf("a=%d b=%d\n",a,b);
	printf("1=Addition\n2=Soustraction\n3=Multiplication\n4=Division\n");
	
	printf("Quelle operation voulez-vous effectuez?");
	scanf("%d",&ch);
	
	if(ch=1){
		printf("%d + %d = %d",a,b,a+b);
	}
	else if(ch=2){
		printf("%d - %d = %d",a,b,a-b);
	}
	else if(ch=3){
		printf("%d * %d = %d",a,b,a*b);
	}
	else if(ch=4){
		printf("%d / %d = %f",a,b,a/b);
	}
	else{
		printf("Erreur de saisie!");
	}
	return(0); 
}
