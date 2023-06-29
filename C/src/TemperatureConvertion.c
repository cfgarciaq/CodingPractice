#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>



int main(){

    char unit;
    float temp;
    bool isUnitCorrect = false;

    while(!isUnitCorrect){

        printf("\nIs the temperature in (F) or in (C)?: ");
        scanf("%c",&unit);

        if(unit == 'c' || unit == 'f'){
            unit = toupper(unit); //changes any lowercase to upercase            
        }

        if(unit == 'C'){
            printf("\nThe temp is currently in C");
            printf("\nEnter the temp value:");
            scanf("%f",&temp);

            temp = (temp * 9 / 5) + 32;
            printf("\nThe temp in Farenheit is: %.1f", temp);

            isUnitCorrect = true;
        }
        else if(unit == 'F'){
            printf("\nThe temp is currently in F");
            printf("\nEnter the temp value:");   
            scanf("%f",&temp);
            
            temp = ((temp - 32) * 5) / 9;
            printf("\nThe temp in Celsius is: %.1f", temp);

            isUnitCorrect = true;
        }
        else{
            printf("\'%c\' is not a valid unit, only F or C", unit);
            printf("\nTry again\n");
        }
    }


    return 0;
}