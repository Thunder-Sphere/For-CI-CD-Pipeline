#include<stdio.h>

int Multiply(int , int );

int main()
{
    int x, y;

    printf("Enter value of X:");
    scanf("%d",&x);

    printf("Enter value of Y:");
    scanf("%d",&y);

    printf("Multiplication: %d",Multiply(x,y));

    printf("\n");
    
    return 0;

}

int Multiply(int a, int b)
{
    int Multiplication = a * b;
    return Multiplication;
}