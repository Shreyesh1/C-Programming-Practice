#include <stdio.h>
#include <stdlib.h>


 main()
{ int i=-1, k=1, z, n;
scanf ("%d",&n);

while(n>0)
{
    z=i+k;
    i=k;
    k=z;
    n--;
}
 printf("%d\n",z);
getch();
}
