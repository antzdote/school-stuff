#include <stdio.h>
void main(){
    int l,w;
int area,per;
int choice=0;
/*printf("Enter formula of area of a rectangle:");
scanf("%c", &l,&w);
printf("Enter formula of perimeter of a rectangle:");
scanf("%c", &l,&w);*/
printf("enter the length:");
scanf("%d",&l);
printf("enter the width:");
scanf("%d",&w);
area=l*w;
per=l+w+l+w;
printf("select function to carry out on your rectangle:");
printf("\n\t1.Area");
printf("\n\t2.Perimeter");
printf("\n enter a number 1 or 2:");
scanf("%d",&choice);
switch (choice)
{
case 1:
    printf("the area of the rectangle is %d",area);
    break;
case 2:
    printf("the perimeter of the rectangle is %d",per);
    break;
default:
    printf("\nInvalid choice");break;

}
}
