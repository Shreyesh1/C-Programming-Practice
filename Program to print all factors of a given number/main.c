#include <stdio.h>
#include <stdlib.h>

 main()
{ int n,i=1;
printf("Enter any number for which factors has to be found.\n");
scanf("%d",&n);
while(i<=n)
{
    if(n%i==0)
    {
        printf("%d\n",i);
        i++;
        continue;
    }
    i++;
}
getch();
}
