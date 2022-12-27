//7. Write a program to count the number of vowels and consonants in a string using a pointer.
#include<stdio.h>
#include<conio.h>
int countVowel(char *p)
{
    int i,countVowel=0;
    for(i=0;*(p+i);i++)
    {
        if (*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'||\
            *(p+i)=='a'-32||*(p+i)=='e'-32||*(p+i)=='i'-32||*(p+i)=='o'-32||*(p+i)=='u'-32)
        {
            countVowel++;
        }
    }
    return countVowel;
}
int countCons(char *p)
{
    int i,countCons=0;
    for(i=0;*(p+i);i++)
    if((*(p+i)>=65&&*(p+i)<=90)||(*(p+i)>=97&&*(p+i)<=122))
    {
        if (*(p+i)!='a'&&*(p+i)!='e'&&*(p+i)!='i'&&*(p+i)!='o'&&*(p+i)!='u'&&\
            *(p+i)!='a'-32&&*(p+i)!='e'-32&&*(p+i)!='i'-32&&*(p+i)!='o'-32&&*(p+i)!='u'-32)
        {
            countCons++;
        }
    }
    return countCons;
}
int main()
{
    int size = 100;
    char str[size];
    printf("Enter your String:\n");
    fgets(str,size,stdin);
    printf("Vowels = %d\n",countVowel(str));
    printf("Consonant = %d",countCons(str));
    getch();
    return 0;
}