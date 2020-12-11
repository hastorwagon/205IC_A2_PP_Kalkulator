#include <stdio.h>

int main() {
    printf("Wpisz działanie\n");
    int x, y;
    float wynik;
    char znak;
    scanf("%d %c %d", &x, &znak, &y);

    switch (znak) {
        case '+':
            wynik = (float) x + y;
            break;

        case '-':
            wynik = (float) x - y;
            break;

        case '*':
            wynik = (float) x * y;
            break;

        case '/':
            if (y == 0 || x == 0) {
                wynik = 0;
                break;
            } else if (y != 0 || x != 0) {
                wynik = (float) x / y;
                break;
            }

        default:
            printf("Niepoprawny symbol");
    }

    printf("Wynik=%1f", wynik);
    return 0;
}
