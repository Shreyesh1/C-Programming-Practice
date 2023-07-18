#include <stdio.h>
#include <stdlib.h>

 main()
{ int a,b,c;
printf("Enter three numbers,\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
    printf("%d is the greatest among %d and %d",a,b,c);
if(b>a&&b>c)
    printf("%d is the greatest among %d and %d",b,a,c);
if(c>a&&c>b)
    printf("%d is the greatest among %d and %d",c,a,b);

getch();
}
