#include <stdio.h>
#include <stdlib.h>

main()
{ int a,b,c,d,e,Marks;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
Marks=a+b+c+d+e;
if(Marks>80)
    printf("Pass");
else
if(Marks>60)
printf("Pass,1st division");
else
if(Marks>45)
printf("Pass, 2nd division");
else
if(Marks>40)
printf("Pass,3rd division");
else
printf("Fail");
getch();
}


