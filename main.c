#include <stdio.h>
#include <math.h>

int main() {
/*
 * Zadanie
 */

 /*
    double Pi;
    double pi = 1;
    double NextSequence=1;
    double i = 1;
    int n = 0;

    while (NextSequence > (pow(10, -11)))
    {
        NextSequence = (2*2*i*i)/((2*2*i*i)-1);
        pi = (pi * NextSequence);
        Pi = 2*pi;
        i = i + 1;
        n = n + 1;
        printf("%d -> %.17f %.10f\n",n,NextSequence,Pi);
    }*/

/*
 * BBP formula
 */

double pi=0;
double NextSequence;
double k=0;

while (k<10)
{
    NextSequence = ((1/pow(16,k))*((4/((8*k)+1))-(2/((8*k)+4))-(1/((8*k)+5))-(1/((8*k)+6))));
    //NextSequence = ((1/pow(16,k))*(((120*k*k)+(151*k)+47)/((512*k*k*k*k)+(1024*k*k*k)+(712*k*k)+(194*k)+15)));
    pi=pi+NextSequence;
    k=k+1;
    printf("%.0f -> %.15f %.15f\n",k,NextSequence,pi);
}
    return 0;
}
