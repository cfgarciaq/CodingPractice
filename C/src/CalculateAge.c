#include <stdio.h>
#include <string.h>
#include <time.h>


int main(){

    char name[25];
    
    int month_days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int b_year, b_month, b_day;
    int current_year, current_month, current_day;
    int year, month, day;

    printf("Whats your name: ");
    fgets(name, 25, stdin); // it adds an \n at the end of the string making the printf jump a line
    name[strlen(name)-1] = '\0'; //replace \n with \0

    printf("What year you where born? (yyyy): ");
    scanf("%d", &b_year);

    printf("What month you where born? (mm): ");
    scanf("%d", &b_month);

    printf("What day you where born? (dd): ");
    scanf("%d", &b_day);

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    current_year = tm.tm_year+1900;
    current_month = tm.tm_mon + 1;
    current_day = tm.tm_mday;
    
    printf("\nHi, %s! How are you?", name);
    printf("\ntoday's date is: %d-%02d-%02d %02d:%02d:%02d\n", current_year, current_month, current_day, tm.tm_hour, tm.tm_min, tm.tm_sec);
    

    year = current_year - b_year;
    month = current_month - b_month; 
    day = current_day - b_day;

    if(day < 0)
    {
        day = month_days[tm.tm_mon] + day;  // day is negative so we are actually substracting using addition    month_days + (-day)
        month--;
    }    
    
    if(month < 0)
    {
        year--;
        month = 12 + month; // same situation as with day
    }    

    printf("\nTo this day, you are: %d years, %d months and %d days old", year, month, day);

    return 0;
}