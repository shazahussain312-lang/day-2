#include<stdio.h>
void main()
{
    int sum,rev,rem,n;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n!=0)
sum=n%10;
rev=10*rev+rem;
n=n/10;
printf("reversed number is %d", rev);
}