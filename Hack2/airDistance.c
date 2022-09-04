#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char **argv){

    double Alat;
    double Blat;
    double Along;
    double Blong;
    double Dis;
    double R;

    R = 6,371;

    r = deg/180 * pi

    printf("Origin:     ");
    scanf("%lf", &Alat);
    printf(", ");
    scanf("%lf", &Along);

    printf("Destination: ");
    scanf("%lf", &Blat);
    printf(", ");
    scanf("%lf", &Blong);

    Dis = arccos(sin(Alat)*sin(Blat)+cos(Alat)*cos(Blat)*cos(Blong - Along))*R ;

    printf("Air distance is %lf kms\n", Dis);

    return 0;
}