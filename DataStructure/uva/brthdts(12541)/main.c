#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct age
{
    char n[50];
    int d;
    int m;
    int y;
} a;

int main()
{
    int i,p,g=0,s=0;
    while(scanf("%d",&p)==1)
    {
        a x[p];
        for(i=0; i<p; i++)
        {
            scanf("%s%d%d%d",x[i].n,&x[i].d,&x[i].m,&x[i].y);
            if(i>0)
            {
                if(x[s].y==x[i].y)
                {
                    if(x[s].m==x[i].m&&x[s].d>x[i].d)
                        s=i;
                    else if(x[s].m>x[i].m)
                        s=i;
                }
                else if(x[g].y==x[i].y)
                {
                    if(x[g].m==x[i].m&&x[g].d<x[i].d)
                        g=i;
                    else if(x[g].m<x[i].m)
                        g=i;
                }
                else if(x[s].y>x[i].y)
                    s=i;
                else if(x[g].y<x[i].y)
                    g=i;
            }
            else
            {
                s=i;
                g=i;
            }
        }
        printf("%s\n%s\n\n",x[g].n,x[s].n);
    }
    return 0;
}
