//1. Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>
#include<conio.h>
void swap(int *p,int *q)
{
    int temp;
    temp = *p;
    *p =  *q;
    *q = temp;
} 
int main()
{
    int a,b;
    printf("Enter value of a and b:\n");
    scanf("%d %d",&a,&b);
    printf("Before Swapping:\na = %d b = %d",a,b);
    swap(&a,&b);
    printf("\nAfter Swapping:\na = %d b = %d",a,b);
    getch();
    return 0;
}