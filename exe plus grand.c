#include<stdio.h>
main()
{
	int x,y,z;
	printf("Entrer trois valeurs entiers:");
	scanf("%d %d %d", &x,&y,&z);
	printf("x=%d y=%d z=%d \n", x,y,z);
	if(x>y && x>z){
		printf("Le plus grand nombre est: %d", x);
	}
	else if(y>z){
		printf("Le plus grand nombre est: %d", y);
	}
	else if(z>y){
		printf("Le plus grand nombre est: %d", z);
	}
return(0);	
}
