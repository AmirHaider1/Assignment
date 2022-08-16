//WAP to find the area of the circle.Take area of the circle from the user as input and print the result in below format.
#include<stdio.h>
int main()
{
    float a,r;
    printf("Enter the radius of circle\n");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("Area of circle is %f\n",a);
    return 0;
}