#include <stdio.h>
#include <stdlib.h>

 main()
{ int i;
scanf("%d",&i);
if(i%2==0)
{i=i-1;
while(i>=1)
{
    printf("%d ",i);
    i--;
    i--;
}
}
else
{while(i>=1)
{
    printf("%d ",i);
    i--;
    i--;
}
}


getch();
}
