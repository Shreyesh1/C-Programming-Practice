#include <stdio.h>
#include <conio.h>

int number(int);
void main()
{
    int n,s;
    printf("Enter the number.\n");
    scanf("%d",&n);
    s=number(n);
    if(s==1)
        {printf("Even");}
    else
       {printf("Odd");}
getch();
}

int number(int n)
{
    if(n%2==0)
        {return(1);}
    else
       {return(0);}
}
