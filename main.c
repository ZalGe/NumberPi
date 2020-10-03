#include <stdio.h>
#include <math.h>

int main() {

    double Pi;
    double pi = 1;
    double NextSequence=1;
    double i = 1;
    int n = 0;


    while (NextSequence > pow(10, -11))
    {
        NextSequence =/*NextSequence*/((pow(2*i,2))/((pow(2*i,2))-1));
        pi = (pi * NextSequence);
        Pi = 2*pi;
        i = i + 1;
        n = n + 1;
        printf("%d -> %.17f %.10f\n",n,NextSequence,Pi);
        //NextSequence=1;
    }


    return 0;
}
