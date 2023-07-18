#include <stdio.h>
#include <stdlib.h>

 main()
{ int a;
 printf("Enter a number,\n");
 scanf("%d",&a);
if(a%10==0^a%10==2^a%10==4^a%10==6^a%10==8)
    printf("Number is even");
else
    printf("Number is odd");
getch();
}
