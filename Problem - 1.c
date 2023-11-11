#include<stdio.h>
#include<math.h>

int main()
{
    float l,t,d,m;

    printf("Give the wavelength: ");
    while(1)
    {

        scanf("%f",&l);
        if (l>=380 && l<=750)
        {
            l =l*1e-9;
            break;

        }
        else
        {
            printf("Out of the range.Please Enter a valid number: ");
        }

    }
    printf("Give the value of theta: ");
    scanf("%f",&t);
    t = t*(3.1416/180);

    printf("Give the value of slit difference: ");
    scanf("%f",&d);
    d = d *1e-6;


    m = (d*sin(t))/l;
    printf("\n%.0fth order maxima\n",m);



    return 0;
}
