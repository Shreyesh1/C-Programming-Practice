#include <stdio.h>
#include <stdlib.h>

void main()
{ int i=2,n,z,j=2;
scanf("%d",&n);
while(i<=n)
{ z=n/i;
if(n%i==0)
{
    while(j<=i)
    {
        if(i==j)
        {
            printf("%d\n",i);
            j=2;
            break;
        }
        if(i%j==0)
        {
            j=2;
            break;
        }
        j++;
    }
}
i++;
}
getch();
}
