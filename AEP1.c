#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Digite dois números: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
            break;

        case '/':
            if(num2 == 0) {
                printf("Erro: Divisão por zero.");
            } else {
                printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
            }
            break;

        default:
            printf("Erro: Operador inválido.");
    }

    return 0;
}