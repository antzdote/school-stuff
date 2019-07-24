#include<stdio.h>
void main()
{
    int a, i, flag=0;
    printf("Enter a positive number:");
    scanf("%d", &a);
    for (i=2; i<=a/2; ++i)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("The number %d is prime",a);
    }
    else
    {
        printf("The number %d is not prime",a);
    }



}
