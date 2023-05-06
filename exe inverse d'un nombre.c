#include <stdio.h>
main()
{
   int Inverse = 0, nbr,nombre;
 
   printf("Entrez un nombre a inverser:");  // Ex:1234   ==> 4000+300+20+1 ==>4321
   scanf("%d", &nbr);
   nombre=nbr;
   while (nbr != 0)
   {
      Inverse = Inverse*10 + nbr%10;
      nbr = nbr/10;
   }
   printf("Le nombre %d en sens inverse est = %d\n",nombre, Inverse);
 
   return 0;
}
