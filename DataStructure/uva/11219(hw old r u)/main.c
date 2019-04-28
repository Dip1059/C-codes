#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,d,m,y,dd,mm,yy,n;
    scanf("%d",&n);
    char a,b;
    for(i=1; i<=n; i++)
    {
        printf("\n");
        scanf("%d%c%d%c%d",&d,&a,&m,&b,&y);
        scanf("%d%c%d%c%d",&dd,&a,&mm,&b,&yy);
        if(y<yy||(y==yy&&m<mm)||(y==yy&&m==mm&&d<dd))
            printf("Case #%d: Invalid birth date\n",i);
        else if((y>yy&&m<mm)||(y>yy&&m==mm&&d<dd))
            printf("Case #%d: %d\n",i,y-yy-1);
        else if(y-yy>130)
            printf("Case #%d: Check birth date\n",i);
        else
            printf("Case #%d: %d\n",i,y-yy);
    }
    return 0;
}
