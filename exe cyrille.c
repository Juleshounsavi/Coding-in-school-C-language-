#include<stdio.h>
int main()
{
	int a;
	float b;
	printf("Entrer un nombre impair compris entre 1 et 10:");
	scanf("%d",&a);
	b=a%2;
	if(1<=a<=10 && b!=0){
		printf("Okay");
	}
	while(b==0){
		printf("Veillez recommencer la saisie.");
		scanf("%d",&a);
	}
	return(0);
}

