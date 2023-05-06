#include<stdio.h>
main()
{
	int n;
	printf("Entrer une valeur de l'echelle:");
	scanf("%d", &n);
	if(n==1){
		printf("Lorsque l'echelle de Richter est %d, la magnitude du tremblement est: micro tremblement de terre, non ressenti.", n);
	}
	else  if(n==2){
		printf("Lorsque l'echelle de Richter est %d, la magnitude du tremblement est: tres mineur. Non ressenti mais detecte.",n);
	}
	else if(n==3){
		printf("Lorsque l'echelle de Richter est %d, la magnitude du tremblement est: mineur. Causant rarement des dommages.",n);
	}
	else if(n==4){
		printf("Lorsque l'echelle de Richter est %d, la magnitude du tremblement est: leger.Secousses notables d'objets a l'interieur des maisons.",n);
	}
	else if(n==5){
		printf("Lorsque l'echelle de Richter est %d, la magnitude du tremblement est: modere.Legers dommages aux edifices biens construits.",n);
	}
	else if(n==6){
		printf("Lorsque l'echelle de Richter est %d, la magnitude du tremblement est: fort. Destructeur dans des zones allant jusqu'a 180 kilometres a la ronde si elles sont peuples",n);
	}
	else if(n==7){
		printf("Lorsque l'echelle de Richter est %d, la magnitude du tremblement est: majeur. Dommages moderes a severes dans des zones plus vastes.",n);
	}
	else if(n==8){
		printf("Lorsque l'echelle de Richter est %d, la magnitude du tremblement est: important. Dommages serieux dans des zones a des centaines de kilometres a la ronde.",n);
	}
	else if(n==9){
		printf("Lorsque l'echelle de Richter est %d, la magnitude du tremblement est: devastateur. Devaste des zones sur des milliers de kilometres a la ronde.",n);
	}
	else if(n>9){
		printf("Lorsque l'echelle de Richter est superieur a 9, la magnitude du tremblement est: c'est une apocalypse");
	}
	else {
		printf("Saisie incorrecte!");
	}
  return(0);	
}
