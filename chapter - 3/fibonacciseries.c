#include<stdio.h>
int main () {
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int a = 0;
    int b = 1;
    int next = 1;
    for(int i = 1;i<=n;i++)
    {
        
    printf(" %d   ",a);
        next = a+b;
        a = b;
        b = next;
         
    }
    
    return 0;
}