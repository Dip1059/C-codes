#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a;
    while(scanf("%c",&a)==1)
    {
        if(a=='=')printf("0");
        else if(a=='-')printf("9");
        else if(a=='0')printf("8");
        else if(a=='9')printf("7");
        else if(a=='8')printf("6");
        else if(a=='7')printf("5");
        else if(a=='6')printf("4");
        else if(a=='5')printf("3");
        else if(a=='4')printf("2");
        else if(a=='3')printf("1");
        else if(a=='2')printf("`");
        else if(a=='\\')printf("[");
        else if(a==']')printf("p");
        else if(a=='[')printf("o");
        else if(a=='P'||a=='p')printf("i");
        else if(a=='O'||a=='o')printf("u");
        else if(a=='I'||a=='i')printf("y");
        else if(a=='U'||a=='u')printf("t");
        else if(a=='Y'||a=='y')printf("r");
        else if(a=='T'||a=='t')printf("e");
        else if(a=='R'||a=='r')printf("w");
        else if(a=='E'||a=='e')printf("q");
        else if(a=='\'')printf("l");
        else if(a==';')printf("k");
        else if(a=='L'||a=='l')printf("j");
        else if(a=='K'||a=='k')printf("h");
        else if(a=='J'||a=='j')printf("g");
        else if(a=='H'||a=='h')printf("f");
        else if(a=='G'||a=='g')printf("d");
        else if(a=='F'||a=='f')printf("s");
        else if(a=='D'||a=='d')printf("a");
        else if(a=='/')printf(",");
        else if(a=='.')printf("m");
        else if(a==',')printf("n");
        else if(a=='M'||a=='m')printf("b");
        else if(a=='N'||a=='n')printf("v");
        else if(a=='B'||a=='b')printf("c");
        else if(a=='V'||a=='v')printf("x");
        else if(a=='C'||a=='c')printf("z");
        else if(a==' ')printf(" ");
        else if(a=='\n')printf("\n");

    }
    return 0;
}
