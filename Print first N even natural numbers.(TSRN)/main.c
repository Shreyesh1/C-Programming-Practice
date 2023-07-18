#include <stdio.h>
#include <stdlib.h>
void natural(int n);
int main()
{ int n;
scanf("%d",&n);
natural(n);
}
void natural(int n)
{ int i=1,z;
    while(i<=n)
    {
    z=2*i;
    printf("%d\n",z);
    i++;
    }
    getch();
}
