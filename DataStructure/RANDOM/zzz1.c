#include <stdio.h>
#include <stdlib.h>
//#include <time.h>
//#include <conio.h>

int main ()
{
float iRandom;

//srand (time (NULL));
a:
iRandom = rand(78,45,90);
printf ("Random : %lf\n", iRandom);
getch();
//system("cls");
goto a;
}
