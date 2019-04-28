#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int r,c;
int sr,sc,dr,dc;
int taken[50][50];
char grid[50][50];
int rec(int i,int j)
{
    if(taken[i][j]==1||grid[i][j]=='#'||i<0||i>=r||j<0||j>=c)
        return 0;
    if(i==dr&&j==dc)
        return 1;

    taken[i][j]=1;
    int ans=0;
    ans|=rec(i+0,j+1);
    ans|=rec(i+1,j+0);
    ans|=rec(i+0,j-1);
    ans|=rec(i-1,j+0);
    return ans;
}
int main()
{
    cin>>r>>c;

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='S')
                sr=i,sc=j;
            if(grid[i][j]=='D')
                dr=i,dc=j;
        }
    memset(taken,0,sizeof taken);
    int a=rec(sr,sc);
    if(a==0)
    {
        puts("Impossible");
    }
    else
    {
        puts("possible");
    }

}
