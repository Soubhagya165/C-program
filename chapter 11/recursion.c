#include<stdio.h>
int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
    return n*factorial(n-1);
    }
}
int main () {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = factorial(n);
    printf("The factorial of %d is %d",n,a);
}