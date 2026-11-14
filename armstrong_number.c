#include<stdio.h>
int main()
{
   int num, original, remainder;
   int sum = 0;

   printf("Enter a three - digit number:");
   scanf("%d", &num);

   original = num;

   while (num != 0)
   {
      remainder = num % 10;
      sum = sum + remainder * remainder * remainder;
      num = num / 10;
   }
   if (sum == original)
   {
      printf("Armstrong Number");
    }
   else
   {
      printf("Noy an Armstrong Number");
   }
   return 0;
}
