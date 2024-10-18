#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, sum;

    printf("enter two integers: ");

    scanf("%d %d", &a,&b);

    sum= a+b;

    printf("the sum of %d and %d is:%d\n",a, b, sum);

    getch();
}