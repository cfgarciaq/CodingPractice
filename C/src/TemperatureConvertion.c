#include <stdio.h>
#include <ctype.h>


int main(){

    char unit;
    float temp;

    printf("\n Is the temperature in (F) or in (C)?: ");
    scanf("%c",&unit);

    unit = toupper(unit); //transforany lowercase to upercase

    if(unit == 'C'){
        printf("The temp is currently in C");
    }
    else if(unit == 'F'){
        printf("The temp is currently in F");
    }
    else{
        printf("%c is not a valid unit, only F or C", unit);
    }

    return 0;
}