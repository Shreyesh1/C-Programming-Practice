#include <stdio.h>
#include <stdlib.h>

int prime(int);
void main()
{   int z,n;
    scanf("%d",&n);
    z=prime(n);
    printf("%d",z);
    getch();
}
int prime(int n)
{
    int i=2,z;
    n++;
    while(i<n)
    {
        z=n/i;
         if(i==n)
        {
            break;
        }

        if(n%i==0)
        {
             n++;
             i=2;
            continue;
        }
        i++;

    }
    return(n);
}
