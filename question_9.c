//9. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
#include<conio.h>
void reverse(int *ptr,int size)
{
    int i=0,temp;
    while(i<size)
    {
        temp = *(ptr+i);
        *(ptr+i) = *(ptr+size-1);
        *(ptr+size-1)= temp;
        i++;
        size--;
    }
}
int main()
{
    int size,i ;
    printf("Enter number of elements:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,size);
    printf("After reverse:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    getch();
    return 0;  
}