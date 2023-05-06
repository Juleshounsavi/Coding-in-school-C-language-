#include<stdio.h>
main()
{
	int age;
	printf("Entrer une valeur d'age:");
	scanf("%d", &age);
	if(age>0 && age<18){
		printf("Il s'agit d'un mineur");
	}
	if(age>=18){
		printf("Il s'agit d'un majeur");
	}
return(0);
}
