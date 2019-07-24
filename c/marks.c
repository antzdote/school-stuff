#include <stdio.h>
void main()
{
int marks=0;
printf("Please input students marks:");
scanf("%d", &marks);
if (marks>80)
{
    printf("\nA");
}
else
{
    if (marks<80 && marks>75)
    {
        printf("\nB+");
    }
    else if (marks>70)
    {
        printf("\nB");
    }
    else {printf("\nF");}
}
}
