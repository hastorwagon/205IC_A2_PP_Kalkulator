#include <stdio.h>

int main() {
    printf("Wpisz działanie\n");
    float x, y, wynik;
    char znak;
    scanf ("%f %c %f", &x, &znak, &y);

    switch(znak)
    {
        case '+':
            wynik=x+y;
        break;
        case '-':
            wynik=x-y;
        break;

        case '*':
            wynik=x*y;
        break;

        case '/':
            wynik=x/y;
        break;

        default:
            printf("Niepoprawny symbol\n");
            break;
    }
    printf("Wynik=%1f", wynik);
        return 0;
}