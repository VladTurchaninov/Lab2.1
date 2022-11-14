#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    double x,y;

    printf("Enter x:");
    scanf("%lf", &x);

    if( x>= 0 && x < 2)
    y=(2*x-1)/(2*x+1);

    else if( x>= 2 && x< 8 )
    y=-x+1;

    else if( x>= 20 && x< 50 )
    y=(2*x)/(sqrt((x,3)+1))-(5*x,2)-cos(x);

    else
        y=0;

    system("cls");
    printf("x = %lf", x);
    printf("\ny = %lf", y);
    return 0;

}
