//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
#include<conio.h>
void sort(int *ptr,int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(*(ptr+i)>*(ptr+j))
            {
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }  
}
int main()
{
    int size,i;
    printf("Enter number of elements:\n");
    scanf("%d",&size);
    int num[size];
    printf("Enter %d numbers for sorting:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&num[i]);
    }
    sort(num,size);
    printf("After Sorting elements are:\n");
    for(i=0;i<size;i++)
      printf("%d ",num[i]);
    getch();
    return 0;
}