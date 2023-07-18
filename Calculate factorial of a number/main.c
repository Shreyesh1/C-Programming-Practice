#include <stdio.h>
#include <stdlib.h>

 main()
{ int i=1,n, z=1;
printf("Enter a number of which factorial is to calculated.\n");
scanf("%d",&n);
while(i<=n)
{
    z=z*n;
    n--;
}
printf("%d",z);
getch();
}
