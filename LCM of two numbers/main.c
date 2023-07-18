#include <stdio.h>
#include <stdlib.h>

void main()
{ int i=1,n,m,z,k;
scanf("%d%d",&n,&m);
k=m>n?m:n;
while(1)
{
    z=m*i;
if(z%n==0)
   {
    printf("LCM is %d",z);
    break;
   }
i++;
}
getch();
}
