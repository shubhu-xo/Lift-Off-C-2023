#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%3==0)
        {
            printf("Fizz \n");
            if(i%5==0)
            {
                printf("Buzz \n");
            }
            continue;
        }
        if(i%5==0)
        {
            printf("Buzz \n");
            continue;
        }
        printf("%d",i);
        printf("\n");
    }
    return 0;
}