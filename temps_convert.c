#include <stdio.h>
#include <math.h>

int main(){

    double Cels, franx;
    scanf("%lf", &Cels);
    franx = 1.8*Cels + 32.0;
    printf("%3.3lf Cels is %3.3lf Faran \n",Cels,franx);

    return 0;
}