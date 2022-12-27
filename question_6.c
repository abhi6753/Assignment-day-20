//6. Write a program to calculate the length of the string using a pointer
#include<stdio.h>
#include<conio.h>
int Strlen(char *ptr)
{
    int i,len =0;
    for(i=0;*(ptr+i);i++)
    {
        if(*(ptr+i)!=32&&*(ptr+i)!=9&&*(ptr+i)!=10)
         len++;
    }
    return len;
}
int main()
{
    int size = 100;
    char str[size];
    printf("Enter your String:\n");
    fgets(str,size,stdin);
    printf("Length of string is %d",Strlen(str));
    getch();
    return 0;
}