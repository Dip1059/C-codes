#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void welcome()
{
    char c;
    int i,j=0;
    for(i=1; i<=10; i++)
        printf(" ");
    for(i=1; i<=60; i++)
        printf("%c",-36);
    printf("\n");
    for(i=1; i<=6; i++)
        printf("\t  %c\t\t\t\t\t\t\t     %c\n",-37,-37);
    printf("\t  %c\t\t    W E L C O M E   T O  T H E\t\t     %c\n",-37,-37);
    printf("\t  %c\t\t\t\t\t\t\t     %c\n",-37,-37);
    printf("\t  %c\t    I N T E R A C T I V E   S N A K E   L U D U\t     %c\n",-37,-37);
    printf("\t  %c\t\t\t\t\t\t\t     %c\n",-37,-37);
    printf("\t  %c\t\t\t    G A M E \t\t\t     %c\n",-37,-37);
    for(i=1; i<=8; i++)
        printf("\t  %c\t\t\t\t\t\t\t     %c\n",-37,-37);
    printf("\t  %c",-37);
    for(i=1; i<=58; i++)
        printf("%c",-36);
    printf("%c",-37);

    for(;;)
    {
        j++;
        system("COLOR C");
        system("COLOR F");
        system("COLOR A");
        system("COLOR 20");
        system("COLOR 53");
        system("COLOR DF");
        system("COLOR AC");
        system("COLOR BD");
        system("COLOR AC");
        system("COLOR C");
        system("COLOR 1");
        system("COLOR A");
        system("COLOR 2");
        system("COLOR 3");
        system("COLOR D");
        system("COLOR A");
        system("COLOR D");
        system("COLOR 5");
        if(j==4)
            break;
    }

}

int Random (int Min, int Max)
{
    system("color 7");
    int R=0,i=0;
s:
    R=(Min + (rand () % (Max-Min+1)));
    i++;
    //srand (time (NULL));
    if(i%2!=0)
    {
        printf ("Random : %d\n",R);
        getchar();
    }
    goto s;
}

int main()
{

    int p=0;
    welcome();
    //getchar();
    system("cls");
    int i,j,l,m,n;
    char a[3000]="+---++---++---++---++---++---++---+|   ||   || 7 ||   || 3 ||   ||   ||END||99 ||S M||97 ||S M||95 ||94 ||   ||   ||   ||   ||   ||   ||   |+---++---++---++---++---++---++---+| L ||   ||   || L ||   ||   ||   || 8 ||92 ||91 || 8 ||89 ||88 ||87 || U ||   ||   || L ||   ||   ||   |+---++---++---++---++---++---++---+|   ||   ||   ||   || L ||   ||   ||86 ||85 ||84 ||83 || 6 ||81 ||80 ||   ||   ||   ||   || U ||   ||   |+---++---++---++---++---++---++---+| 6 ||   || L ||   ||   ||   ||   ||S M||78 || 7 ||76 ||75 ||74 ||73 ||   ||   || U ||   ||   ||   ||   |+---++---++---++---++---++---++---+| L ||   || 5 ||   ||   ||   || L || 3 ||71 ||S M||69 ||68 ||67 || 7 || U ||   ||   ||   ||   ||   || L |+---++---++---++---++---++---++---+|   ||   ||   ||   || L || 7 ||   ||65 ||64 ||63 ||62 || 6 ||S T||59 ||   ||   ||   ||   || L ||   ||   |+---++---++---++---++---++---++---+|   ||   || 6 || 4 ||   ||   || L ||58 ||57 ||S T||S M||54 ||53 || 4 ||   ||   ||   ||   ||   ||   || U |+---++---++---++---++---++---++---+|   ||   || 5 ||   ||   ||   || 4 ||51 ||50 ||S T||48 ||47 ||46 ||S T||   ||   ||   ||   ||   ||   ||   |+---++---++---++---++---++---++---+|   ||   ||   || L ||   || 2 ||   ||44 ||43 ||42 || 5 ||40 ||S M||38 ||   ||   ||   || U ||   ||   ||   |+---++---++---++---++---++---++---+|   || L ||   ||   || 3 ||   ||   ||37 || 5 ||35 ||34 ||S T||32 ||31 ||   || L ||   ||   ||   ||   ||   |+---++---++---++---++---++---++---+| L ||   || 1 ||   ||   ||   ||   || 4 ||29 ||S M||27 ||26 ||25 ||24 || L ||   ||   ||   ||   ||   ||   |+---++---++---++---++---++---++---+| L ||   ||   ||   ||   || 2 ||   || 1 ||22 ||21 ||20 ||19 ||S T||17 || U ||   ||   ||   ||   ||   ||   |+---++---++---++---++---++---++---+|   || L ||   ||   || L ||   || 1 ||16 || 3 ||14 ||13 || 2 ||11 ||S T||   || L ||   ||   || U ||   ||   |+---++---++---++---++---++---++---+|   ||   || L ||   ||   || L ||   || 9 || 8 || 2 || 6 || 5 || 1 || 3 ||   ||   || L ||   ||   || L ||   |+---++---++---++---++---++---++---+|   ||   ||   |                    | 2 || 1 ||STA|                    |   ||   ||RT |                    +---++---++---+                    ";
    int k=strlen(a);
    printf("     ");
    for(j=0; j<k; j++)
    {
        printf("%c ",a[j]);
        if((j+1)%35==0)
        {
            printf("\n");
            system("COLOR C");
            system("COLOR 10");
            system("COLOR A");
            system("COLOR 20");
            system("COLOR 50");
            system("COLOR D");
            system("COLOR A");
            system("COLOR D");
            system("COLOR C");

            printf("     ");
        }
    }
    getchar();
    system("cls");
    Random(1,6);
    return 0;
}
