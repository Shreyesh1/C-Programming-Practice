#include <stdio.h>
#include <stdlib.h>

int prime(int);
void main()
{
    int z,n;
    scanf("%d",&n);
    z=prime(n);
    if(z==1)
    printf("Prime");
    else
       {printf("Not Prime");}
    getch();
}

int prime(int n)
{
int i=2,z;
while(i<=n)
{
    z=n/i;
    if(i==n)
    {return(1);}
    if(n%i==0)
    {return(0);}
    i++;
}
}
