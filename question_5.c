//5. Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,*ptr,*ptr2;
    printf("Enter two number to check which are maximum:\n");
    scanf("%d%d",&a,&b);
    ptr =&a;
    ptr2 =&b;
    printf("Maximum = %d",*ptr>*ptr2?*ptr:*ptr2);
    getch();
    return 0;
}