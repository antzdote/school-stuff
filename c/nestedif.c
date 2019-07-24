#include<stdio.h>
void main()
{

    float bal=10000; float amount=0;
    int action=0;
    printf("************ATM SYSTEM*************\n");
    printf("Your balance is: %.2f\n",bal);
    printf("\t1 for withdrawal\n");
    printf("\t2 for deposit\n");
    printf("Choose an action by keying in 1 or 2:\n");
    scanf("%d", &action);
    if (action==1)
    {
        printf("\n\t\tWITHDRAWAL");
        printf("\nEnter amount to withdraw");
        scanf("%f",&amount);
        if (amount<=bal)
        {
            bal=bal-amount;
            printf("\nWithdraw successful");
            printf("\nYour current balance is: %.2f", bal);
        }
        else
        {
            printf("\nWithdraw NOT successful ");
            printf("\nYour current balance is: %.2f", bal);
        }}
        else
        {

            printf("\n\t\tDEPOSIT");
            printf("\nEnter amount to deposit");
            scanf("%f",&amount);
            bal=bal+amount;
            printf("\nYour new balance is %.2f=",bal);

        }


        }


