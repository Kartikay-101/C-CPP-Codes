// Path: C/recursion.c
//Wap of recursion to find factorial of a number
#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
    return 0;
}
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}