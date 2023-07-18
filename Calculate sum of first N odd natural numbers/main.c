#include <stdio.h>
#include <stdlib.h>

main()
{ int i=1, n , z=0;
scanf("%d",&n);
while(i<=n)
{
    z=z+i;
    i=i+2;
}
printf("%d",z);
getch();
}
