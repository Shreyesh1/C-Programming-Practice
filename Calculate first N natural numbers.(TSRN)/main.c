#include <stdio.h>
#include <conio.h>

void natural(int);
void main()
{
    int n;
    scanf("%d",&n);
    natural(n);
    getch();
}
void natural(int n)
{
    int i=1;
    while(i<=n)
    {printf("%d",i);
    i++;
    }
}
