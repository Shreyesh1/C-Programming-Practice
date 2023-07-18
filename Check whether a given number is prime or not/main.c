#include <stdio.h>
#include <stdlib.h>

 main()
{ int i=2, n, z;
scanf("%d",&n);
while(i<n)
{
    if(n%i==0)
    {
        printf("%d is not a prime number",n);
        break;

    }
    i++;
}
if(n/i==1)
    printf("%d is a prime number",n);
getch();
}
