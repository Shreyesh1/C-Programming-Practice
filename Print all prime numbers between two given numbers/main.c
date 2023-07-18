#include <stdio.h>
#include <stdlib.h>

 main()
{ int i,n,l;
printf("Enter any two numbers\n");
scanf("%d%d",&n,&l);
if(n==2||l==2)
    printf("2 ");
if(n==3||l==3)
    printf("3 ");
while(n<=l)
 {
if(n%2==0||n%3==0)
{
    n++;
    continue;
}
else
{
    printf("%d ",n);
    n++;
}
 }
getch();
}
