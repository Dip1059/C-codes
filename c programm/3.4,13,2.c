#include<stdio.h>
int main()
{
    char ch;
    d:
    scanf("%c",&ch);

    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')

    {printf("VOWEL\n");}

    else if(ch=!'a'||ch=!'A'||ch=!'e'||ch!='E'||ch=!'i'||ch=!'I'||ch=!'o'||ch=!'O'||ch=!'u'||ch=!'U')
    {printf("CONSONANT\n");}

    //goto d;
    return 0;
}
