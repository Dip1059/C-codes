#include <stdio.h>
#include <stdlib.h>
//#include <time.h>
//#include <conio.h>

float Random (int _iMin, int _iMax)
{
return (_iMin + (rand () % (_iMax-_iMin+1)));
}

int main ()
{
float iRandom;

//srand (time (NULL));
a:
iRandom = Random (70.1,80.00);
printf ("Random : %lf\n", iRandom);
getch();
//system("cls");
goto a;
}
