#include<stdio.h>
int main()
{
   int num, 1, count = 0;

   printf("Enter a number:");
   scanf("%d", &num);

   if (num <= 1)
   {
     printf("Not a Prime Number");
   }
   else
   {
      for (i = 1; i <= num; i++)
      {
         if (num % i == 0)
         {
            count++;
         }
      }
      if (count == 2)
      {
          printf("Prime Number");
      }
      else
      {
          printf("Not a Prime Number");
      }
   }
   return 0;
}
