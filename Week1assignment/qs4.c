#include<stdio.h>
int main()
{
    float x,y,z;
    int a;
    printf("Enter 2 numbers");
    scanf("%f %f",&x,&y);
    printf("Enter what operation you want to perform(+,-,*,/) \n");
    printf("Enter '1' for addition \n");
    printf("Enter '2' for subtraction \n");
    printf("Enter '3' for multiplication \n");
    printf("Enter '4' for division \n");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
        z=x+y;
        printf("%f+%f=%f",x,y,z);
        break;
        
        case 2:
        z=x-y;
        printf("%f-%f=%f",x,y,z);
        break;
        
        case 3:
        z=x*y;
        printf("%f*%f=%f",x,y,z);
        break;

        case 4:
        z=x/y;
        printf("%f/%f=%f",x,y,z);
        break;

        default:
        printf("Entered option is invalid");
        break;
    }
    return 0;
}