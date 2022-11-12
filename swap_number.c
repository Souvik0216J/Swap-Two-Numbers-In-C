#include<stdio.h>
int main()
{
    int a, b;
    printf("\nEnter The Value Of 'A': ");
    scanf("%d", &a); //Suppose a = 10
    printf("\nEnter The Value Of 'B': ");
    scanf("%d", &b); // Suppose b = 20

    a = a+b; // a = 10 + 20 = 30
    b = a-b; // b = 30 - 20 = 10
    a = a-b; // a = 30 - 10 = 20

    printf("\nA = %d\tB = %d", a, b);//20, 10
    return 0;
}