#include<stdio.h>
int main()
{
   int a, b;

   printf("Enter two numbers:");
   scanf("%d %d", &a, &b);

   if (a > b)
   {
     printf("A is greater");
   }
   else if (b > a)
   {
     printf("B is greater");
   }
   else
   {
     printf("Both numbers are equal");
   }

 return 0;
}
