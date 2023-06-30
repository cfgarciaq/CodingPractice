
#include <stdio.h>
#include <stdbool.h>

int main(){
    char operator;
    double num1;
    double num2;
    double result;

    bool isCorrect = false;

    while(!isCorrect){
        
        printf("\nEnter an operator (+ - * /): ");
        scanf("%c", &operator);

        if(operator == '+' || operator == '-' || operator == '*' || operator == '/'){
            isCorrect = true;
        }
    }


    printf("Enter number 1: ");
    scanf("%lf", &num1);
    
    printf("Enter number 2: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\nResult: %.2lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\nResult: %.2lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\nResult: %.2lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\nResult: %.2lf", result);
        break;
    default:
        break;
    }
}