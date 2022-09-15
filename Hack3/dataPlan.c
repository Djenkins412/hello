/** Author: Dezmond Jenkins
 *
 *
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char **argv){

    int GB;
    int CurDay;
    int DaysL;
    double GBU; // GB Usage
    double AGBU; // Average GB Usage
    double EU; //Extra usage
    double PGBU; //Preferred GB Usage
    double AU; //Alotted Usage Left Per Day

    scanf("%d", &GB);
    scanf("%d", &CurDay);
    scanf("%lf", &GBU);

    DaysL = 30 - CurDay;
    PGBU = GB / 30.0;
    AGBU = GBU / CurDay;
    EU = (GBU + (AGBU * DaysL)) - GB;
    AU = (GB - GBU) / DaysL;

    printf("%d days used, %d days remaining\n", CurDay, DaysL);
    printf("Average daily use: %.2lf GB/day\n\n", AGBU);

   if (EU >= 0) {
    printf("You are EXCEEDING your average daily use (%.2lf GB/day).\n", PGBU);
    printf("Continuing this high usage you'll exceed your data plan by %.2lf GB.\n", EU);
    printf("To stay below your data plan, use no more than %.2lf GB/day", AU);
}
   else {
       printf("You are doing well, please do not exceed your allotted GB usage");
   }

    return 0;
}
