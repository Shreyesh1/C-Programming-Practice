#include <stdio.h>
#include <stdlib.h>

 main()
{ int i=2,j=2,z;
while(i<=100)
{
    z=i/j;
    if(i==j)
    {
        printf("%d\n",i);
        i++;
        j=2;
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
