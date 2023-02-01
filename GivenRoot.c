//Given Root
#include<stdio.h>
int main()
{
    float a,b,c,discriminant;

    printf("Enter coefficients a,b and c ");
    scanf("%f%f%f",&a,&b,&c);

    discriminant=b*b-4*a*c;

    if(discriminant>0)
    {
       printf("real root");
    }
    else if(discriminant<0)
    {
        printf("imaginary roots");
    }
    else
    {
        printf("roots equal");
    }

return 0;
}
