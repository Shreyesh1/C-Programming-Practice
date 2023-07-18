#include <stdio.h>
#include <stdlib.h>

 main()
{ int a;
printf("Enter a number,\n");
scanf("%d",&a);
if((a/2)*2==a)
    printf("Number is even");
else
    printf("Number is odd");
getch();
}
