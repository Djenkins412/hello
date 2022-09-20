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

    int GB = atof(argv[1]);
    int CurDay = atof(argv[2]);
    double GBUsage = atof(argv[3]);

    int DaysLeft;
    double AverageGBUsage;
    double EstimatedGBUsage;
    double PreferredGBUsage;
    double AllottedUsage;

    DaysLeft = 30 - CurDay;
    PreferredGBUsage = GB / 30.0;
    AverageGBUsage = GBUsage / CurDay;
    EstimatedGBUsage = (GBUsage + (AverageGBUsage * DaysLeft)) - GB;
    AllottedUsage = (GB - GBUsage) / DaysLeft;

    printf("%d days used, %d days remaining\n", CurDay, DaysLeft);
    printf("Average daily use: %.2lf GB/day\n\n", AverageGBUsage);

    if(GBUsage > GB) {
            printf("You have already exceeded your monthly coverage, please accept all extra fees\n");
    } else if (EstimatedGBUsage >= 0) {
          printf("You are EXCEEDING your average daily use (%.2lf GB/day).\n", PreferredGBUsage);
          printf("Continuing this high usage you'll exceed your data plan by %.2lf GB.\n", EstimatedGBUsage);
          printf("To stay below your data plan, use no more than %.2lf GB/day", AllottedUsage);
    } else {
           printf("You are below your average allotted daily use %.2lf GB/Day,\n You can still use up to %.2lf GB/Day", PreferredGBUsage, AllottedUsage);
    }
    return 0;
}
