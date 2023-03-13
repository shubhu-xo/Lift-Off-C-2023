#include <stdio.h>
int main()
{
   int x,y,sum=0,rem;
   printf("Enter an integer ");
   scanf("%d", &x);
   y=x;
   do{
      rem=y%10;
      sum+=rem;
      y/=10;
   }
   while (y!=0);
   printf("Sum of digits of %d=%d\n",x,sum);
   return 0;
}