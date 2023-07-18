#include <stdio.h>
#include <stdlib.h>

 main()
{
    int a=-1,b=1,c,n,i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    printf("%d is the %dth term",c,n);
    getch();
}
