#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,m,i=2,z,p;
    printf("Enter two numbers");
    scanf("%d%d",&n,&m);
    p=n<m?n:m;
    while(i<=p)
    {
        if(n%i&&m%i==0)
        {z=i;}
        i++;
    }
    printf("HCF is %d",z);
}
