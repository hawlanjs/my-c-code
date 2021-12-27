#include <stdio.h>
//by hawlan
int main()
{
   printf("how many pizza slices you eat (tell the truth):");
   int slices;
   scanf("%d", &slices);
   int caloriespreSlice = 250;
//by hawlan

  switch(slices)
  {

   case 1:
         printf("you did a great job!");
        break;
   case 2:
         printf("you did an ok job!");
        break;
   case 3:
        printf("you did an ok job! try to eat 2 next time");
        break;
   case 4:
        printf("you're a dissapointment");
        break;
   default:
         printf("enjoy your heart disease");
         break;

  }

  printf("you had %d calories.\n", caloriespreSlice * slices);

  return 0;
   //by hawlan

  
}
