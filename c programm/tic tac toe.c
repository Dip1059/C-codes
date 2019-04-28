#include<stdio.h>
#include<conio.h>
int box[10]={'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},turn=0;

char game_check()
{
    char won='\0';
       if(box[1]=='X'&&box[2]=='X'&&box[3]=='X')
        {
            won='X';
            return won;
        }
        else if(box[4]=='X'&&box[5]=='X'&&box[6]=='X')
        {
            won='X';
            return won;
        }
        else if(box[7]=='X'&&box[8]=='X'&&box[9]=='X')
        {
            won='X';
            return won;
        }
        else if(box[1]=='X'&&box[5]=='X'&&box[9]=='X')
        {
            won='X';
            return won;
        }
        else if(box[3]=='X'&&box[5]=='X'&&box[7]=='X')
        {
            won='X';
            return won;
        }
        else if(box[3]=='X'&&box[6]=='X'&&box[9]=='X')
        {
            won='X';
            return won;
        }
        else if(box[2]=='X'&&box[5]=='X'&&box[8]=='X')
        {
            won='X';
            return won;
        }
        else if(box[1]=='X'&&box[4]=='X'&&box[7]=='X')
        {
            won='X';
            return won;
        }
        else if(box[1]=='O'&&box[2]=='O'&&box[3]=='O')
        {
            won='O';
            return won;
        }
        else if(box[4]=='O'&&box[5]=='O'&&box[6]=='O')
        {
            won='O';
            return won;
        }
        else if(box[7]=='O'&&box[8]=='O'&&box[9]=='O')
        {
            won='O';
            return won;
        }
        else if(box[1]=='O'&&box[5]=='O'&&box[9]=='O')
        {
            won='O';
            return won;
        }
        else if(box[3]=='O'&&box[5]=='O'&&box[7]=='O')
        {
            won='O';
            return won;
        }
        else if(box[3]=='O'&&box[6]=='O'&&box[9]=='O')
        {
            won='O';
            return won;
        }
        else if(box[2]=='O'&&box[5]=='O'&&box[8]=='O')
        {
            won='O';
            return won;
        }
        else if(box[1]=='O'&&box[4]=='O'&&box[7]=='O')
        {
            won='O';
            return won;
        }
        else
            return won;
}
void draw_box()
{
    system("cls");
    printf("\n\n\t\t\t     %c |   %c   |  %c\n",box[1],box[2],box[3]);
    printf("\t\t\t  -----+-------+------\n");
    printf("\t\t\t     %c |   %c   |  %c\n",box[4],box[5],box[6]);
    printf("\t\t\t  -----+-------+------\n");
    printf("\t\t\t     %c |   %c   |  %c\n",box[7],box[8],box[9]);
    }
void computer_turn()
{

    if(box[1]=='O'&&box[2]=='O'&&box[3]=='\0'){box[3]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='\0'&&box[3]=='O'){box[2]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='O'&&box[3]=='O'){box[1]='O';turn++;return ;}
    else if(box[4]=='O'&&box[5]=='O'&&box[6]=='\0'){box[6]='O';turn++;return ;}
    else if(box[4]=='O'&&box[5]=='\0'&&box[6]=='O'){box[5]='O';turn++;return ;}
    else if(box[4]=='\0'&&box[5]=='O'&&box[6]=='O'){box[4]='O';turn++;return ;}
    else if(box[7]=='\0'&&box[8]=='O'&&box[9]=='O'){box[7]='O';turn++;return ;}
    else if(box[7]=='O'&&box[8]=='\0'&&box[9]=='O'){box[8]='O';turn++;return ;}
    else if(box[7]=='O'&&box[8]=='O'&&box[9]=='\0'){box[9]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[5]=='O'&&box[9]=='O'){box[1]='O';turn++;return ;}
    else if(box[1]=='O'&&box[5]=='\0'&&box[9]=='O'){box[5]='O';turn++;return ;}
    else if(box[1]=='O'&&box[5]=='O'&&box[9]=='\0'){box[9]='O';turn++;return ;}
    else if(box[3]=='O'&&box[5]=='O'&&box[7]=='\0'){box[7]='O';turn++;return ;}
    else if(box[3]=='O'&&box[5]=='\0'&&box[7]=='O'){box[5]='O';turn++;return ;}
    else if(box[3]=='\0'&&box[5]=='O'&&box[7]=='O'){box[3]='O';turn++;return ;}
    else if(box[1]=='O'&&box[4]=='O'&&box[7]=='\0'){box[7]='O';turn++;return ;}
    else if(box[1]=='O'&&box[4]=='\0'&&box[7]=='O'){box[4]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[4]=='O'&&box[7]=='O'){box[1]='O';turn++;return ;}
    else if(box[2]=='O'&&box[5]=='O'&&box[8]=='\0'){box[8]='O';turn++;return ;}
    else if(box[2]=='O'&&box[5]=='\0'&&box[8]=='O'){box[5]='O';turn++;return ;}
    else if(box[2]=='\0'&&box[5]=='O'&&box[8]=='O'){box[2]='O';turn++;return ;}
    else if(box[3]=='O'&&box[6]=='O'&&box[9]=='\0'){box[9]='O';turn++;return ;}
    else if(box[3]=='O'&&box[6]=='\0'&&box[9]=='O'){box[6]='O';turn++;return ;}
    else if(box[3]=='\0'&&box[6]=='O'&&box[9]=='O'){box[3]='O';turn++;return ;}

    else if(box[1]=='X'&&box[2]=='X'&&box[3]=='\0'){box[3]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='X'){box[2]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='X'){box[1]='O';turn++;return ;}
    else if(box[4]=='X'&&box[5]=='X'&&box[6]=='\0'){box[6]='O';turn++;return ;}
    else if(box[4]=='X'&&box[5]=='\0'&&box[6]=='X'){box[5]='O';turn++;return ;}
    else if(box[4]=='\0'&&box[5]=='X'&&box[6]=='X'){box[4]='O';turn++;return ;}
    else if(box[7]=='\0'&&box[8]=='X'&&box[9]=='X'){box[7]='O';turn++;return ;}
    else if(box[7]=='X'&&box[8]=='\0'&&box[9]=='X'){box[8]='O';turn++;return ;}
    else if(box[7]=='X'&&box[8]=='X'&&box[9]=='\0'){box[9]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[5]=='X'&&box[9]=='X'){box[1]='O';turn++;return ;}
    else if(box[1]=='X'&&box[5]=='\0'&&box[9]=='X'){box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[5]=='X'&&box[9]=='\0'){box[9]='O';turn++;return ;}
    else if(box[3]=='X'&&box[5]=='X'&&box[7]=='\0'){box[7]='O';turn++;return ;}
    else if(box[3]=='X'&&box[5]=='\0'&&box[7]=='X'){box[5]='O';turn++;return ;}
    else if(box[3]=='\0'&&box[5]=='X'&&box[7]=='X'){box[3]='O';turn++;return ;}
    else if(box[1]=='X'&&box[4]=='X'&&box[7]=='\0'){box[7]='O';turn++;return ;}
    else if(box[1]=='X'&&box[4]=='\0'&&box[7]=='X'){box[4]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[4]=='X'&&box[7]=='X'){box[1]='O';turn++;return ;}
    else if(box[2]=='X'&&box[5]=='X'&&box[8]=='\0'){box[8]='O';turn++;return ;}
    else if(box[2]=='X'&&box[5]=='\0'&&box[8]=='X'){box[5]='O';turn++;return ;}
    else if(box[2]=='\0'&&box[5]=='X'&&box[8]=='X'){box[2]='O';turn++;return ;}
    else if(box[3]=='X'&&box[6]=='X'&&box[9]=='\0'){box[9]='O';turn++;return ;}
    else if(box[3]=='X'&&box[6]=='\0'&&box[9]=='X'){box[6]='O';turn++;return ;}
    else if(box[3]=='\0'&&box[6]=='X'&&box[9]=='X'){box[3]='O';turn++;return ;}

    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='\0')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='\0')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='\0')
    {box[1]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='\0')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='X'&&box[9]=='\0')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='X')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='O')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='X'&&box[3]=='O'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='O')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='O')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='O')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='O')
    {box[8]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='O'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='O'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='X'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='X'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='X'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='X'&&box[9]=='O')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='O'&&box[6]=='X'&&box[7]=='\0'&&box[8]=='X'&&box[9]=='O')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='X'&&box[9]=='O')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='O')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='O')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='\0'&&box[4]=='X'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[6]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='X'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='X'&&box[8]=='O'&&box[9]=='O')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='O'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='X'&&box[8]=='O'&&box[9]=='O')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='O'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='X'&&box[8]=='O'&&box[9]=='O')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='O'&&box[5]=='X'&&box[6]=='X'&&box[7]=='X'&&box[8]=='O'&&box[9]=='O')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='O'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='X'&&box[3]=='O'&&box[4]=='O'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='O'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='O'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='O'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='X'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='O'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='O'&&box[4]=='O'&&box[5]=='X'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[8]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='O'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='X'&&box[3]=='O'&&box[4]=='O'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='O'&&box[4]=='O'&&box[5]=='X'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='O'&&box[4]=='O'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='X'&&box[8]=='X'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='O'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='X'&&box[9]=='O')
    {box[6]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='X'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='X'&&box[9]=='O')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='X'&&box[9]=='O')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='X'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='X'&&box[9]=='O')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='O'&&box[6]=='X'&&box[7]=='\0'&&box[8]=='X'&&box[9]=='O')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='X'&&box[9]=='O')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='X'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='X'&&box[9]=='O')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='O'&&box[6]=='X'&&box[7]=='\0'&&box[8]=='X'&&box[9]=='O')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='O'&&box[4]=='\0'&&box[5]=='O'&&box[6]=='X'&&box[7]=='X'&&box[8]=='X'&&box[9]=='O')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='X'&&box[9]=='O')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='O'&&box[5]=='O'&&box[6]=='X'&&box[7]=='X'&&box[8]=='X'&&box[9]=='O')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='O')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='X'&&box[3]=='O'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='O')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='O')
    {box[1]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='O')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='O'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='O'&&box[4]=='X'&&box[5]=='O'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[1]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='O')
    {box[8]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='O'&&box[9]=='O')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='O'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='X'&&box[7]=='X'&&box[8]=='O'&&box[9]=='O')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='O')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[1]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[8]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='X'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='O'&&box[9]=='O')
    {box[6]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='X'&&box[7]=='X'&&box[8]=='O'&&box[9]=='O')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='X'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='X'&&box[9]=='O')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='X'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='O')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='\0')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='\0')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='\0')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='X'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='\0')
    {box[6]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[6]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='X')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='X')
    {box[6]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='\0')
    {box[1]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='X'&&box[3]=='X'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[1]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='O'&&box[3]=='X'&&box[4]=='X'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[6]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='X'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[1]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='\0')
    {box[1]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='\0')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='X')
    {box[6]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='X')
    {box[6]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='O'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='X')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='O'&&box[6]=='O'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='X')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='O'&&box[6]=='O'&&box[7]=='O'&&box[8]=='X'&&box[9]=='X')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='O'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='X')
    {box[1]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='X'&&box[3]=='X'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='O'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='X')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='O'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='X')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='O'&&box[6]=='O'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='X')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='X'&&box[4]=='X'&&box[5]=='O'&&box[6]=='O'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='X')
    {box[1]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='O'&&box[6]=='O'&&box[7]=='O'&&box[8]=='X'&&box[9]=='X')
    {box[2]='O';turn++;return ;}

    else if(box[1]=='O'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='x'&&box[6]=='O'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='X')
    {box[8]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='\0')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='O'&&box[3]=='X'&&box[4]=='X'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='X'&&box[6]=='O'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='O'&&box[3]=='X'&&box[4]=='X'&&box[5]=='X'&&box[6]=='O'&&box[7]=='O'&&box[8]=='X'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='X'&&box[5]=='X'&&box[6]=='O'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='X')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='\0')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='X'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='X')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='O'&&box[6]=='O'&&box[7]=='O'&&box[8]=='X'&&box[9]=='X')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='X'&&box[5]=='X'&&box[6]=='O'&&box[7]=='\0'&&box[8]=='O'&&box[9]=='X')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='X'&&box[3]=='O'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='O'&&box[9]=='X')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='O'&&box[9]=='X')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='X'&&box[6]=='O'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='X')
    {box[8]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='X'&&box[5]=='X'&&box[6]=='O'&&box[7]=='\0'&&box[8]=='O'&&box[9]=='X')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='X'&&box[6]=='O'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='X')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='X'&&box[5]=='X'&&box[6]=='O'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='X')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='X'&&box[3]=='O'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='O'&&box[9]=='X')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='X')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='X'&&box[6]=='O'&&box[7]=='O'&&box[8]=='\0'&&box[9]=='X')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='O')
    {box[7]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='O'&&box[8]=='X'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='O'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='\0')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='X'&&box[3]=='O'&&box[4]=='O'&&box[5]=='O'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='\0')
    {box[8]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='O'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='\0')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='O'&&box[4]=='\0'&&box[5]=='O'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='O'&&box[4]=='O'&&box[5]=='X'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[8]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='O'&&box[4]=='O'&&box[5]=='X'&&box[6]=='X'&&box[7]=='X'&&box[8]=='O'&&box[9]=='\0')
    {box[9]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='O'&&box[4]=='O'&&box[5]=='X'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='\0')
    {box[1]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='O'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='\0')
    {box[1]='O';turn++;return ;}
    else if(box[1]=='O'&&box[2]=='X'&&box[3]=='O'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='\0')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='O'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='\0'&&box[8]=='X'&&box[9]=='\0')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='O'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='X')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='O'&&box[4]=='\0'&&box[5]=='O'&&box[6]=='X'&&box[7]=='X'&&box[8]=='O'&&box[9]=='X')
    {box[4]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='X'&&box[3]=='O'&&box[4]=='O'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='O'&&box[4]=='O'&&box[5]=='X'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[8]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='O'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[8]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='O'&&box[5]=='X'&&box[6]=='X'&&box[7]=='X'&&box[8]=='O'&&box[9]=='O')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='O'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='X'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='O'&&box[4]=='O'&&box[5]=='X'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='X'&&box[8]=='\0'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='O'&&box[5]=='O'&&box[6]=='X'&&box[7]=='X'&&box[8]=='X'&&box[9]=='O')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='X'&&box[9]=='O')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='\0')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='O'&&box[3]=='X'&&box[4]=='\0'&&box[5]=='X'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='\0')
    {box[1]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='X'&&box[7]=='O'&&box[8]=='X'&&box[9]=='\0')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='\0'&&box[6]=='\0'&&box[7]=='O'&&box[8]=='X'&&box[9]=='X')
    {box[5]='O';turn++;return ;}
    else if(box[1]=='X'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='X')
    {box[6]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='X')
    {box[3]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='X'&&box[4]=='X'&&box[5]=='O'&&box[6]=='O'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='X')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='\0'&&box[3]=='\0'&&box[4]=='X'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='\0'&&box[8]=='\0'&&box[9]=='X')
    {box[2]='O';turn++;return ;}
    else if(box[1]=='\0'&&box[2]=='X'&&box[3]=='\0'&&box[4]=='\0'&&box[5]=='O'&&box[6]=='\0'&&box[7]=='X'&&box[8]=='O'&&box[9]=='X')
    {box[6]='O';turn++;return ;}
}
void player1_turn()
{
    int pla1;
    PLA:
    printf("\n\n\t\t\t player turn :> ");
    scanf("%d",&pla1);
    if(box[pla1]=='X'||box[pla1]=='O'||pla1>9||pla1<1)
    {
        printf("\t\t\t invalid number enter number again:");
        goto PLA;
    }
    box[pla1]='X';
    turn++;
    draw_box();
    return ;
}
void player2_turn()
{
    int pla2;
    PLA:
    printf("\n\n\t\t\t player 2 turn :> ");
    scanf("%d",&pla2);
    if(box[pla2]=='O'||box[pla2]=='X'||pla2>9||pla2<1)
    {
        printf("\t\t\t invalid number enternumber again:");
        goto PLA;
    }
    box[pla2]='O';
    turn++;
    draw_box();
}
void player_computer()
{
    char won;
    while(turn<10){
    draw_box();
    player1_turn();
    won=game_check();
    if(won=='X')
    {
        printf("\n\n\t\t\t Congrates! You won");
        break ;
    }
    else if (won=='\0'&&turn==10)
    {
        draw_box();
        printf("\n\n\t\t\t Game is draw...");
        break ;
    }
    computer_turn();
    won=game_check();
    draw_box();
    if(won=='O')
    {
        printf("\n\n\t\t\t You lose! Computer won");
        break ;
    }
    else if (won=='\0'&&turn==10)
    {
        draw_box();
        printf("\n\n\t\t\t Game is draw...");
        break ;
    }

    }
}
void player_to_player()
{
    char won;
    while(turn<10){
    draw_box();
    player1_turn();
    won=game_check();
    if(won=='X')
    {
        printf("\n\n\t\t\t Congrates! player 1 won");
        break ;
    }
    else if (won=='\0'&&turn==10)
    {

        draw_box();
        printf("\n\n\t\t\t Game is draw...");
        break ;
    }
    player2_turn();
    won=game_check();
    draw_box();
    if(won=='O')
    {
        printf("\n\n\t\t\t Congrates! player 2 won");
        break ;
    }
    else if (won=='\0'&&turn==10)
    {

        draw_box();
        printf("\n\n\t\t\t Game is draw...");
        break ;
    }}


}
int game_menu()
{
   int choice;
   printf("\n\n");
   printf("\t\t\t <::::::::::::::::::::::::::::::>\n");
   printf("\t\t\t <::::::>    GAME MENU   <::::::>\n\n\t\t\t ** Choice you want to play with **\n\n\t\t\t ** press 1 : You vs Computer \n\n");
    printf("\n\n \t\t\t ** press 2 : You vs Others\n\n\n\n \t\t\t ** press 3 : For game help\n\n\n\n \t\t\t ** press 4 : Exit\n\n");
    printf("\t\t\t <::::::::::::::::::::::::::::::>\n\n");
    scanf("%d",&choice);
    return choice;
}
void ending()
{
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t\t <:::::::::::::::::::::::::>\n");
    printf("\t\t\t <::::::> THANK YOU <::::::>\n");
    printf("\t\t\t <::::::>    FOR    <::::::>\n");
    printf("\t\t\t <::::::>  PLAYING  <::::::>\n");
    printf("\t\t\t <::::::>    GAME   <::::::>\n");
    printf("\t\t\t <:::::::::::::::::::::::::>\n\n\n\n");
    getch();
    return ;
}
void game_help()
{
    printf("\n\n\t\t <::::::::::::::::::::::::::::::::::>\n");
    printf("\t\t <:::> THIS IS TIC TAC TOE GAME <:::>\n");
    printf("\t\t <::::::::::::::::::::::::::::::::::>\n");
    printf("\n\n\t\t\t     1 |   2   |  3\n");
    printf("\t\t\t  -----+-------+------\n");
    printf("\t\t\t     4 |   5   |  6\n");
    printf("\t\t\t  -----+-------+------\n");
    printf("\t\t\t     7 |   8   |  9\n");
    printf("\n\n\t\t You have to press 1,2,3,4,5,6,7,8,9");
    printf("\n\n\t\t and enter key for playing this game.\n\n ");
    printf("\t\t <::::::::::::::::::::::::::::::::::>\n");
    printf("\t\t <::> THANK YOU FOR  TAKING HELP <::>\n");
    printf("\t\t <::::::::::::::::::::::::::::::::::>");
    getch();
}
void starting()
{
    printf("\n\n\n\n");
    printf("\t\t\t <::::::::::::::::::::::::::>\n");
    printf("\t\t\t <:::::::> WEL COME <:::::::>\n");
    printf("\t\t\t <:::::::>  TO THE  <:::::::>\n");
    printf("\t\t\t <:::::::>   GAME   <:::::::>\n");
    printf("\t\t\t <::::::::::::::::::::::::::>");
}
int main()
{
    int i,choice,c=1;
    char t;
    starting();
    getch();
    XY:
    system("cls");
    choice=game_menu();
    switch(choice)
    {
        case 1:
            while(c==1)
            {
            for(i=0;i<10;i++)
            {
                box[i]='\0';
            }
            turn=1;
            system("cls");
            player_computer();
            printf("\n\n\t\t\t Do you want to continue Game: Y/N ?");
            t=getche();
            if(t=='y'||t=='Y'){c=1;}
            else if(t=='n'||t=='N'){c=0;}
            else{c=1;}
            }
            break;
        case 2:
            while(c==1)
            {
            for(i=0;i<10;i++)
            {
                box[i]='\0';
            }
            turn=1;
            draw_box();
            player_to_player();
            printf("\n\n\t\t\t Do you want to continue Game: Y/N ?");
            t=getche();
            if(t=='y'||t=='Y'){c=1;}
            else if(t=='n'||t=='N'){c=0;}
            else{c=1;}
            }
            break;
        case 3:
            system("cls");
            game_help();
            goto XY;
        case 4:
            printf("\n");
            break;
    }
    ending();

return 0;
}
