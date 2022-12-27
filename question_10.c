//10. Write a program to print a string in reverse using a pointer
#include<stdio.h>
#include<conio.h>
int Strlen(char **ptr)
{
    int len=0,i;
    for(i=0;*(*ptr+i);i++)
    {
        if(*(*ptr+i)!=10)
        len++;
    }
    return len;
}
void reverse(char *ptr)
{
    int i=0,j = Strlen(&ptr);
    *(ptr+j)='\0';
    j--;
    char temp;
    while(i<j)
    {
        temp = *(ptr+i);
        *(ptr+i)=*(ptr+j);
        *(ptr+j)=temp;
        i++;
        j--;
    }    
}
int main()
{
    int size = 100;
    char str[size];
    printf("Enter your string:\n");
    fgets(str,size,stdin);
    reverse(str);
    printf("After Reverse:\n%s",str);
    getch();
    return 0;  
}