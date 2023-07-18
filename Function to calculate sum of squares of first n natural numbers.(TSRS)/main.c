#include <stdio.h>
#include <stdlib.h>
int natural(int n);
void main()
{ int n,p;
scanf("%d",&n);
p=natural(n);
printf("Sum of squares of numbers is %d",p);
getch();
}

int natural (int n)
{
    int i=1,z=0;
    while(i<=n)
    {
        z=z+i*i;
        i++;
    }
    return(z);
}

