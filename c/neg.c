#include <stdio.h>
void main()
{
int a;
printf("Please enter a positive number:");
scanf("%d", &a);
if (a<0)
{
    printf("The number you entered is not a positive number. Try again");
}
else
{

    char name;
    printf("Enter your name:");
    scanf("%c", &name);
    printf("%c");
}

}


//char name;

/*if (a<0)
{
    printf("Input number must be positive");
}
else
{

}
}*/
