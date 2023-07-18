#include <stdio.h>
#include <conio.h>

float Cir(float);
void main()
{ float x,s;
printf("Enter radius of Circle.\n");
scanf("%f",&x);
s=Cir(x);
printf("Circumference of Circle is %f",s);
getch();
}

float Cir(float r)
{
    float c;
    c =3.14*r*r;
    return(c);
}

