#include <stdio.h>
void main()
{
    int operator;
    float m=0;float n=0; float p=0;
    printf("enter first number:");
    scanf("%f",&m);
        printf("enter second number:");
    scanf("%f",&n);

    printf("\n \t1. for addition");
    printf("\n \t2. for subtraction");
    printf("\n \t3. for division");
    printf("\n \t4. for multiplication");
     printf("\n enter an operator:");
    scanf("%d",&operator);
    switch (operator)
    { case 1:
        p=m+n;
    printf("the sum of %.2f and %f is %.2f",m,n,p);break;
    case 2:
        p=m-n;
     printf("the difference of %.2f and %.2f is %.2f",m,n,p);break;
     case 3:
         p=m/n;
     printf("the division of %.2f and %.2f is %.2f",m,n,p);break;
     case 4:
         p=m*n;
      printf("the product of %.2f and %.2f is %.2f",m,n,p);break;
    default:
    printf("\nInvalid choice");break;}
}


