#include <stdio.h>
#include <conio.h>

float Area(float);
void main()
{ float x,s;
printf("Enter radius of Circle.\n");
scanf("%f",&x);
s=Area(x);
printf("Area of Circle is %f",s);
getch();
}

float Area(float r)
{
    float A;
    A =3.14*r*r;
    return(A);
}
