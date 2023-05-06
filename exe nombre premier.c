#include<stdio.h>
main()
{
	int n, i,pre;
	printf("Entrer un nombre:");
	scanf("%d", &n);
	pre=1;
	for(i=2;i<n;i++){
		if(n%i==0){
			pre=0;
		}
	}
	if(pre==1){
		printf("%d est nombre premier.",n);		
	}
	else{
		printf("%d n'est pas un nnombre premier.",n);
	}
	return(0);
}

