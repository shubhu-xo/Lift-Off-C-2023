#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        int count = i;
        while(count--)
        {
            printf("%d ", num);
            num ++ ;
        }
        printf("\n");
    }
}