//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
#include<conio.h>
void swap(int size,char*p,char*q)
{
    int i;
    char temp;
    for(i=0;*(p+i)!=0;i++)
    {
        temp   = *(p+i);
        *(p+i) = *(q+i);
        *(q+i) =   temp;
    }
}
int main()
{
    int size=20,i;
    char arr_1[size];
    char arr_2[size];
    printf("Enter first string:\n");
    fgets(arr_1,size,stdin);
    printf("Enter second string:\n");
    fgets(arr_2,size,stdin);
    swap(size,arr_1,arr_2);
    printf("After swapping:\n");
    printf("%s\n%s",arr_1,arr_2);
    getch();
    return 0;
}