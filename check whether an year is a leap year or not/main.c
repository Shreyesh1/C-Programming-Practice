#include <stdio.h>
#include <stdlib.h>

 main()
{ int a;
printf("Enter a year,\n");
scanf("%d",&a);
if(a%4==0^a%400==0)
    printf("Year is a leap year");
else
    printf("Year is not a leap year");
getch();


}
