#include<stdio.h>
int main()
{
    float r,d,c,a;
    float pi=3.141592;
    printf("Enter radius of circle");
    scanf("%f",&r);
    d=2.00*r;
    c=2.00*pi*r;
    a=pi*r*r;
    printf("diameter of circle is %f \n",d);
    printf("circumference of circle is %f \n",c);
    printf("area of circle is %f \n",a);
    return 0;
}