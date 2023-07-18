#include <stdio.h>
#include <stdlib.h>

 main()
{ int i=1,n,z=0;
scanf("%d",&n);
while(i<=n)
{
    z=z+n*n*n;
    n--;
}
printf("%d",z);
getch();
}
