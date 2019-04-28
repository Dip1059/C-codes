#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

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
        if(j==2)
            break;
    }

}


/*void main menu()
{
    printf("\t\t\t\t\t\t\tMAIN  MENU");
    char p='\0';
    while(p!='0')
    {
        printf("\t\t1. Play Game (2 Players)\n");
        printf("\t\t2. Help\n");
        printf("\t\t0. Exit\n\n");
        printf("Your Option : ");
        scanf("%c",&p);
        printf("\n\n")
    switch(p)
    {
        case '1':return;
        case '2':help(); break;
        case '0':
    }




    }
}*/



int Random (int Min, int Max)
{
    int R=0,r,p=0;
h:
    p++;
    R=(Min+(rand () % 6));
    srand (time (NULL));
    srand (time (NULL));
    srand (time (NULL));
    if(p%2!=0)
    {
        r=R;
        return r;
    }
    else
        goto h;
}


int Gameplay(int box[],int k,char a[])
{
    int n,o=1,p=1,j,l=0,m=0,q=0,f=0,g=0;
    char y[3],z[3];
s:
    l++;
    n=Random(1,6);
    if(l%2!=0)
        printf("  Player 1: %d\t\t\t\t\t Player 2: ",n);
    else
        printf("  Player 1: \t\t\t\t\t Player 2: %d",n);
    if(n==1)
        for(; ;)
        {
            if(n==1&&l%2!=0||l%2!=0&&m>0)
            {
d:
                if(o==p&&q>m||o==p&&q==m&&m>0||o==p&&m>q)
                {
                    f++;
                    y[0]=z[0];
                    y[1]=z[1];
                    z[0]=-37;
                    z[1]=-37;
                }
                if(o>1)
                {
                    a[box[o-n]-1]=y[0];
                    a[box[o-n]]=y[1];
                }
                m++;
                if(o==95&&n==0)
                {
                    y[0]='9';
                    y[1]='5';
                }
                else if(o==97&&n==0)
                {
                    y[0]='9';
                    y[1]='7';
                }
                else if(o==99&&n==0)
                {
                    y[0]='9';
                    y[1]='9';
                }
                else if(f==0)
                {
                    y[1]=a[box[o]];
                    y[0]=a[box[o]-1];
                }
                a[box[o]]=-37;
                a[box[o]-1]=-37;
                getchar();
                system("cls");
                printf("     ");
                for(j=0; j<k; j++)
                {
                    printf("%c ",a[j]);
                    if((j+1)%35==0)
                    {
                        printf("\n");
                        printf("     ");
                    }
                }
                if(o==4)
                {
                    o=23;
                    n=19;
                    goto d;
                }
                else if(o==7)
                {
                    o=12;
                    n=5;
                    goto d;
                }
                else if(o==15)
                {
                    o=72;
                    n=57;
                    goto d;
                }
                else if(o==30)
                {
                    o=52;
                    n=22;
                    goto d;
                }
                else if(o==36)
                {
                    o=41;
                    n=5;
                    goto d;
                }
                else if(o==61)
                {
                    o=82;
                    n=21;
                    goto d;
                }
                else if(o==66)
                {
                    o=77;
                    n=11;
                    goto d;
                }
                else if(o==90)
                {
                    o=93;
                    n=3;
                    goto d;
                }
                else if(o==28)
                {
                    o=10;
                    n=-18;
                    goto d;
                }
                else if(o==39)
                {
                    o=18;
                    n=-21;
                    goto d;
                }
                else if(o==55)
                {
                    o=45;
                    n=-10;
                    goto d;
                }
                else if(o==70)
                {
                    o=49;
                    n=-21;
                    goto d;
                }
                else if(o==79)
                {
                    o=56;
                    n=-23;
                    goto d;
                }
                else if(o==96)
                {
                    o=33;
                    n=-63;
                    goto d;
                }
                else if(o==98)
                {
                    o=60;
                    n=-38;
                    goto d;
                }
                if(o==100||p==100)
                    return o;
                n=Random(1,6);
                getchar();
                printf("  Player 1: \t\t\t\t\t Player 2: %d",n);
                if(p==95&&n>5)n=0;
                else if(p==97&&n>3)n=0;
                else if(p==99&&n>1)n=0;
                if(q>0)
                    p=p+n;
                l++;
                f=0;
            }


            else if(n==1&&l%2==0||l%2==0&&q>0)
            {
c:
                if(p==o&&m>q||p==o&&m==q&&q>0||p==o&&q>m)
                {
                    g++;
                    z[0]=y[0];
                    z[1]=y[1];
                    y[0]=-79;
                    y[1]=-79;
                }
                if(p>1)
                {
                    a[box[p-n]-1]=z[0];
                    a[box[p-n]]=z[1];

                }
                q++;
                if(p==95&&n==0)
                {
                    z[0]='9';
                    z[1]='5';
                }
                else if(p==97&&n==0)
                {
                    z[0]='9';
                    z[1]='7';
                }
                else if(p==99&&n==0)
                {
                    z[0]='9';
                    z[1]='9';
                }
                else if(g==0)
                {
                    z[1]=a[box[p]];
                    z[0]=a[box[p]-1];
                }
                a[box[p]]=-79;
                a[box[p]-1]=-79;
                getchar();
                system("cls");
                printf("     ");
                for(j=0; j<k; j++)
                {
                    printf("%c ",a[j]);
                    if((j+1)%35==0)
                    {
                        printf("\n");
                        printf("     ");
                    }
                }
                if(p==4)
                {
                    p=23;
                    n=19;
                    goto c;
                }
                else if(p==7)
                {
                    p=12;
                    n=5;
                    goto c;
                }
                else if(p==15)
                {
                    p=72;
                    n=57;
                    goto c;
                }
                else if(p==30)
                {
                    p=52;
                    n=22;
                    goto c;
                }
                else if(p==36)
                {
                    p=41;
                    n=5;
                    goto c;
                }
                else if(p==61)
                {
                    p=82;
                    n=21;
                    goto c;
                }
                else if(p==66)
                {
                    p=77;
                    n=11;
                    goto c;
                }
                else if(p==90)
                {
                    p=93;
                    n=3;
                    goto c;
                }
                else if(p==28)
                {
                    p=10;
                    n=-18;
                    goto c;
                }
                else if(p==39)
                {
                    p=18;
                    n=-21;
                    goto c;
                }
                else if(p==55)
                {
                    p=45;
                    n=-10;
                    goto c;
                }
                else if(p==70)
                {
                    p=49;
                    n=-21;
                    goto c;
                }
                else if(p==79)
                {
                    p=56;
                    n=-23;
                    goto c;
                }
                else if(p==96)
                {
                    p=33;
                    n=-63;
                    goto c;
                }
                else if(p==98)
                {
                    p=60;
                    n=-38;
                    goto c;
                }
                if(p==100||o==100)
                    return o;
                n=Random(1,6);
                getchar();
                printf("  Player 1: %d\t\t\t\t\t Player 2: ",n);
                if(o==95&&n>5)n=0;
                else if(o==97&&n>3)n=0;
                else if(o==99&&n>1)n=0;
                if(m>0)
                    o=o+n;
                l++;
                g=0;
            }

            else
            {
                if(n!=1&&l%2!=0)
                {
                    n=Random(1,6);
                    getchar();
                    system("cls");
                    printf("     ");
                    for(j=0; j<k; j++)
                    {
                        printf("%c ",a[j]);
                        if((j+1)%35==0)
                        {
                            printf("\n");
                            printf("     ");
                        }
                    }
                    getchar();
                    printf("  Player 1: \t\t\t\t\t Player 2: %d",n);
                    p=p+n;
                    l++;
                }
                else
                {
                    n=Random(1,6);
                    getchar();
                    system("cls");
                    for(j=0; j<k; j++)
                    {
                        printf("%c ",a[j]);
                        if((j+1)%35==0)
                        {
                            printf("\n");
                            printf("     ");
                        }
                    }
                    getchar();
                    printf("  Player 1: %d\t\t\t\t\t Player 2: ",n);
                    o=o+n;
                    l++;
                }

            }
        }
    else
    {
        getchar();
        system("cls");
        goto s;
    }
    getchar();
}

int main()
{

    int p=0,o=0;
    welcome();
    system("cls");
//    main menu();
//   system("cls");
    int i,j,l=1922,m=0,n;
    char a[3000]="+---++---++---++---++---++---++---+|   ||   || 7 ||   || 3 ||   ||   ||END||99 ||S M||97 ||S M||95 ||94 ||   ||   ||   ||   ||   ||   ||   |+---++---++---++---++---++---++---+| L ||   ||   || L ||   ||   ||   ||  8||92 ||91 ||  8||89 ||88 ||87 || U ||   ||   || L ||   ||   ||   |+---++---++---++---++---++---++---+|   ||   ||   ||   || L ||   ||   ||86 ||85 ||84 ||83 ||  6||81 ||80 ||   ||   ||   ||   || U ||   ||   |+---++---++---++---++---++---++---+| 6 ||   || L ||   ||   ||   ||   ||S M||78 ||  7||76 ||75 ||74 ||73 ||   ||   || U ||   ||   ||   ||   |+---++---++---++---++---++---++---+| L ||   || 5 ||   ||   ||   || L ||  3||71 ||S M||69 ||68 ||67 ||  7|| U ||   ||   ||   ||   ||   || L |+---++---++---++---++---++---++---+|   ||   ||   ||   || L || 7 ||   ||65 ||64 ||63 ||62 ||  6||S T||59 ||   ||   ||   ||   || L ||   ||   |+---++---++---++---++---++---++---+|   ||   || 6 || 4 ||   ||   || L ||58 ||57 ||S T||S M||54 ||53 ||  4||   ||   ||   ||   ||   ||   || U |+---++---++---++---++---++---++---+|   ||   || 5 ||   ||   ||   || 4 ||51 ||50 ||S T||48 ||47 ||46 ||S T||   ||   ||   ||   ||   ||   ||   |+---++---++---++---++---++---++---+|   ||   ||   || L ||   || 2 ||   ||44 ||43 ||42 ||  5||40 ||S M||38 ||   ||   ||   || U ||   ||   ||   |+---++---++---++---++---++---++---+|   || L ||   ||   || 3 ||   ||   ||37 ||  5||35 ||34 ||S T||32 ||31 ||   || L ||   ||   ||   ||   ||   |+---++---++---++---++---++---++---+| L ||   || 1 ||   ||   ||   ||   ||  4||29 ||S M||27 ||26 ||25 ||24 || L ||   ||   ||   ||   ||   ||   |+---++---++---++---++---++---++---+| L ||   ||   ||   ||   || 2 ||   ||  1||22 ||21 ||20 ||19 ||S T||17 || U ||   ||   ||   ||   ||   ||   |+---++---++---++---++---++---++---+|   || L ||   ||   || L ||   || 1 ||16 ||  3||14 ||13 ||  2||11 ||S T||   || L ||   ||   || U ||   ||   |+---++---++---++---++---++---++---+|   ||   || L ||   ||   || L ||   || 9 || 8 ||  2|| 6 || 5 ||  1|| 3 ||   ||   || L ||   ||   || L ||   |+---++---++---++---++---++---++---+|   ||   ||   |                    | 2 || 1 ||STA|                    |   ||   ||RT |                    +---++---++---+                    ";
    int box[101];
    box[0]=0;
    box[1]=2037;
    box[2]=2032;
    for(i=3; i<101; i++)
    {
        m++;
        box[i]=l;
        if(m==7)
        {
            m=0;
            l=l-110;
        }
        else
            l=l-5;
    }
    int k=strlen(a);
    printf("     ");
    for(j=0; j<k; j++)
    {
        printf("%c ",a[j]);
        if((j+1)%35==0)
        {
            printf("\n");
            /*system("COLOR C");
            system("COLOR 10");
            system("COLOR A");
            system("COLOR 20");
            system("COLOR 50");
            system("COLOR D");
            system("COLOR A");
            system("COLOR D");
            system("COLOR C");*/
            //system("COLOR C");
            printf("     ");
        }
    }
    for(i=0; i<2; i++)
    {
        system("COLOR C");
        system("COLOR 10");
        system("COLOR A");
        system("COLOR 20");
        system("COLOR 50");
        system("COLOR D");
        system("COLOR A");
        system("COLOR D");
        system("COLOR FC");
        system("COLOR 1A");
    }
    getchar();
    system("cls");
    o=Gameplay(box,k,a);
    getchar();
    printf("\n\t\t\t\tG A M E   O V E R\n");
    if(o==100)
        printf("\t\t\t  !! PLAYER 1 HAS WON THE GAME !!\n");
    else
        printf("\t\t\t  !! PLAYER 2 HAS WON THE GAME !!\n");
    getchar();
    return 0;
}

