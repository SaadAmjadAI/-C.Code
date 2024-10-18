#include<stdio.h>
#include<conio.h>
int main () 
{
    int number;
    int square;
    printf("Enter an integer less than 60:");
    scanf("%d",&number);
    if(number < 60) {
        square = number * number;
        printf("the square of %d is %d\n",number,square);
    } else{
    printf("please enter a number less than 60.\n");
    } getch();
}