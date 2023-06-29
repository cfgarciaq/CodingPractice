#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){

    char name[25];
    int age;

    printf("Whats your name: ");
    fgets(name, 25, stdin); // it adds an \n at the end of the string making the printf jump a line
    name[strlen(name)-1] = '\0'; //replace \n with \0

    print("How old are you?");
    scanf("%d", &age);

    print("Hi, %s! How are you?", name);

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("now: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);



    return 0;
}