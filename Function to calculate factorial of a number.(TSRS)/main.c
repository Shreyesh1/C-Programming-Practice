#include <stdio.h>
#include <stdlib.h>

int fact(int);
void main()
{ int n,s;
printf("Enter the number");
scanf("%d",&n);
s=fact(n);
printf("%d",s);
getch();
}

int fact(int n)
{int z=1,i=n;
while(i>=1)
{
    z=z*i;
    i--;
}
return(z);
}
