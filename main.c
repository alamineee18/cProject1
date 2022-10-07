#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#define CYCLE 60

int main()
{
    int hour, minute, second;
    printf("Enter Hour Minute and Second:\n");
    scanf("%d %d %d", &hour, &minute, &second);

    system("cls");

    int h=0, m=0, s=0;

    while(1)
    {
        printf("%.2d:%.2d:%.2d\n", h, m, s);
        if(h == hour && m == minute && s == second)
        {
            break;
        }
        else
        {
            system("cls");
        }
        s++;
        Sleep(1000);
        if(s == CYCLE)
        {
            m++;
            s = 0;
        }
        if( m == CYCLE)
        {
            h++;
            m = 0;
        }
    }

    return 0;
}
