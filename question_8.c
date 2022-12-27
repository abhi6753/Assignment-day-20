//8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
#include<conio.h>
int sum(int*p,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum = sum+*(p+i);
    }
    return sum;
}
int main()
{
    int size,i;
    printf("Enter number of elements:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sum of %d elements are %d",size,sum(arr,size));
    getch();
    return 0;
}