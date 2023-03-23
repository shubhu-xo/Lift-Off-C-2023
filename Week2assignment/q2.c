#include <stdio.h>
int main()
{
    int l1, l2;
    printf("Length of 1st Array: ");
    scanf("%d", &l1);
    int array1[l1];
    printf("Array: ");
    for (int i = 0; i < l1; i++)
        scanf("%d", &array1[i]);
    printf("Length of 2nd Array: ");
    scanf("%d", &l2);
    int array2[l2];
    printf("Array: ");
    for (int i = 0; i < l2; i++)
        scanf("%d", &array2[i]);
    int l3 = l1 + l2;
    int array3[l3];
    for (int i = 0; i < l3; i++)
    {
        if (i < l1)
            array3[i] = array1[i];
        else
            array3[i] = array2[i - l1];
    }
    printf("Reverse of Merged Array: ");
    for (int i = 0; i < l3; i++)
        printf("%d ", array3[l3 - i - 1]);
}