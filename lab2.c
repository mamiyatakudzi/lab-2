#include <stdio.h>
#include <locale.h>

int task1();
int task2();
int task3();
int homework();
int main() {
    setlocale(LC_CTYPE, ".UTF-8");
    task1();
    task2();
    task3();
    homework();

    return 0;
}

int task1() {
    printf("Задание 1\n\n");
    printf("123\n");
    printf("%5d\n%10d\n%15d\n%20d\n", 1, 2, 3, 4);
    printf("%5d\n%10d\n%15d\n%20d\n", 1, 2, 3, 4);
    printf("%10.5f\n ", 12.234657);
    printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
    printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5);
    printf("Умножить %d на %d равен %d\n ", 2000, 4, 2000 * 4);
    printf("%g разделить %e равно %f\n ", 5., 2000000., 5. / 2000000);
    printf("%d разделить %d равно %d\n ", 5, 2000000, 5 / 2000000);
    printf("%f разделить %f равно %f\n ", 5., 2000000., 5. / 2000000);
    printf("%g разделить %g равно %g\n ", 5., 2000000., 5. / 2000000);
    printf("%e разделить %e равно %e\n\n", 5., 2000000., 5. / 2000000);

    return 0;
}

int task2() {
    int n = 15, k = 30; 
    printf("Задание 2\n\n");
    printf("Сейчас %d часа %d минуты 00 секунд\n", n, k);
    printf("Идет %d минута суток\n", n * 60 + k);
    printf("До полуночи осталось %d часов и %d минут\n", 23 - n, 60 - k);
    printf("С 8:00 прошло %d секунд\n", (n - 8) * 3600 + k * 60);

    printf("Текущий час = %.3f суток и текущая минута = %.2f часа\n\n", n / 24., k / 60.);

    return 0;
}

int task3() {
    printf("Задание 3\n\n");
    int N = 3, K = 3, M = 5, L = 373;
    printf("Дано: N=%d K=%d M=%d L=%d\n", N, K, M, L);
    printf("Ответ: %+.5f\n\n", (N / 1.0) / L);
    return 0;
}

int homework() {
    double price_sweets = 450.0;
    double price_cookies = 250.0;
    double price_apples = 120.0;
    double X = 1.5;
    double Y = 0.8;
    double Z = 2.3;
    double total_cost = (X * price_sweets) + (Y * price_cookies) + (Z * price_apples);
    printf("Известна стоимость 1 кг товаров:\n");
    printf("- Конфеты: %.2f\n", price_sweets);
    printf("- Печенье: %.2f\n", price_cookies);
    printf("- Яблоки: %.2f\n\n", price_apples);
    printf("Покупатель взял:\n");
    printf("- X = %.1f кг конфет\n", X);
    printf("- Y = %.1f кг печенья\n", Y);
    printf("- Z = %.1f кг яблок\n\n", Z);
    printf("ОТВЕТ: Стоимость всей покупки составляет %.2f\n", total_cost);

    return 0;
}
