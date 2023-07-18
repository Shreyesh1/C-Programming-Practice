#include <stdio.h>
#include <stdlib.h>

 main()
{ int i, n,z=0;
scanf("%d",&n);
while(n!=0)
{
    i=n%10;
    n=n/10;
    z=z+i;
}
printf("%d",z);
getch();
}
