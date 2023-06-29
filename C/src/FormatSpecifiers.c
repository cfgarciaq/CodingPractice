
#include <stdio.h>




int main(){

    // format specifier % == defines and formats a type data to be displayed

    /*
    %c = character
    %s = strinf (array of character)
    %f = float
    %lf = double
    %d = integer

    %.1 = decimal precision
    %1 = minimum field width
    %- = left align
    */

    float item1 = 5.76;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%.2f\n",item1);
    printf("Item 3: $%.2f\n",item2);
    printf("Item 2: $%.2f\n",item3);

    return 0;
}