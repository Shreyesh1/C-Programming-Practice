#include <stdio.h>
#include <stdlib.h>

 main()
{ int i=2,j=2,z,n,l;
scanf("%d",&n);
while(l<n)
{
    z=i/j;
    if(i==j)
    {
        printf("%d\n",i);
        i++;
        j=2;
        l++;
        continue;
    }
    if(i%j==0)
    {
        i++;
        j=2;
        continue;
    }
    j++;
}
getch();
}
