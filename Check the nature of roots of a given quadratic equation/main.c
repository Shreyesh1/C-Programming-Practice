#include <stdio.h>
#include <stdlib.h>

 main()
{ int a,b,c,d;
printf("Enter values of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
if(d>0)
    printf("Real and distinct roots");
else
{
    if(d<0)
        printf("Imaginary roots");
    else
        printf("Real and same roots");
}
getch();

}
