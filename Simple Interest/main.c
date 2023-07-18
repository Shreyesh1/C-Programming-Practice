#include <stdio.h>
#include <stdlib.h>
 main()
{ int P,r,t,A;
printf("Enter initial principal balance,annual interest rate, time \'In years\'\n");
scanf("%d%d%d",&P,&r,&t);
A=P+(P*r*t);
printf("Simple interest will be %d",A);
    getch();
}
