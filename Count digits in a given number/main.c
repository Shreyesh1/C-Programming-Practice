#include <stdio.h>
#include <stdlib.h>

 main()
{ int i, n, z=1;
scanf("%d", &n);
while(i<=n)
{
    n=n/10;
    z++;
}
printf("%d",z);
getch();
}
