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

    int startBal = atof(argv[1]);
    int monCon = atof(argv[2]);
    double retRate = atof(argv[3]);
    double infRate = atof(argv[4]);
    int yearsL = atof(argv[5]);
    int monthsL;
    double Bal = startBal;
    double infARate;
    double monRate;
    double intGain;
    double totIntGain = 0;

    infARate = ((1.0 + retRate)/(1.0 + infRate) - 1.0);

    monthsL = yearsL * 12;
    monRate = infARate / 12.0;

    printf("%d %d %lf %lf %d", startBal, monCon, retRate, infRate, yearsL);

    if (startBal < 0 || 1 < retRate < 0 || 1 < infRate < 0 || yearsL < 1){
        printf("ILLEGAL INPUT");
        exit (1);
    } else if(monCon * 12 > 18500){
        printf("Illegal: Monthly contributions exceed 18,500 dollar limit");
        exit (1);
    } else {
        printf(" Month         Interest            Balance\n");

        for(int x = 1; x<=monthsL; x++){
             intGain = round((Bal * monRate)*100)/100;
             Bal = Bal + intGain + monCon;
             totIntGain = intGain + totIntGain;
             printf("%lf %lf %lf", intGain, Bal, totIntGain);
           //  printf("%4d %11s %2.2lf %11s %2.2lf\n", x, "$", intGain, "$", Bal);
    }
    }
        printf("Total Interest Earned: $ %.2lf\n", totIntGain);
        printf("Total Nest Egg: %.2lf\n", Bal);

    return 0;
}