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
    double R = 6371;


    printf("Latitude of Origin: ");
    scanf("%lf", &Alat);

    printf("Longitude of Origin: ");
    scanf("%lf", &Along);

    printf("Latitude of Destination: ");
    scanf("%lf", &Blat);

    printf("Longitude of Destination: ");
    scanf("%lf", &Blong);

    double RLatA = (Alat/180)*M_PI;
    double RLongA = (Along/180)*M_PI;
    double RLatB = (Blat/180)*M_PI;
    double RLongB = (Blong/180)*M_PI;
    double Dis = acos((sin(RLatA)*sin(RLatB))+(cos(RLatA)*cos(RLatB)*cos(RLongB - RLongA)))*R ;

    printf("          Location Distance\n");
    printf("=====================================\n");
    printf("Origin:      %lf, %lf\n", Alat, Along);
    printf("Destination: %lf, %lf\n", Blat, Blong);
    printf("Air distance is %lf kms\n", Dis);

    return 0;
}