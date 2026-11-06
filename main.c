#include <stdio.h>
#include <locale.h>
#include <tgmath.h>

void task1();
void task2();
void task3();

int main() {
    setlocale(LC_ALL, "RUS");

    task1();
    task2();
    task3();

    return 0;
}

// Задание 1
void task1() {
    char c;

    printf("Введите символ: ");
    scanf(" %c", &c);

    if (c >= '0' && c <= '9') {
        printf("Это цифра\n");
    }
    else {
        printf("Это буква\n");
    }
}

// Задание 2
void task2() {
    float x, y;
    char c;

    printf("Введите выражение (например: 10+5): ");
    scanf("%f%c%f", &x, &c, &y);

    switch (c) {
        case '+':
            printf("= %f\n", x + y);
            break;

        case '-':
            printf("= %f\n", x - y);
            break;

        case '*':
            printf("= %f\n", x * y);
            break;

        case '/':
            if (y != 0) {
                printf("= %f\n", x / y);
            }
            else {
                printf("Ошибка! Деление на ноль невозможно.\n");
            }
            break;

        case '^':
            printf("= %f\n", pow(x, y));
            break;

        default:
            printf("Неизвестная операция!\n");
    }
}

// Задание 3
// Определение дня недели
void task3() {
    int day, choice;

    printf("Задание 3. Определение дня недели\n");
    printf("Выберите вариант нумерации:\n");
    printf("1 - неделя начинается с понедельника\n");
    printf("2 - неделя начинается с воскресенья\n");

    printf("Ваш выбор: ");
    scanf("%d", &choice);

    printf("Введите номер дня недели (1-7): ");
    scanf("%d", &day);

    if (day < 1 || day > 7) {
        printf("Ошибка! Номер дня должен быть от 1 до 7.\n");
        return;
    }

    switch (choice) {
        case 1: // Нумерация с понедельника
            switch (day) {
                case 1:
                    printf("Понедельник\n");
                    break;
                case 2:
                    printf("Вторник\n");
                    break;
                case 3:
                    printf("Среда\n");
                    break;
                case 4:
                    printf("Четверг\n");
                    break;
                case 5:
                    printf("Пятница\n");
                    break;
                case 6:
                    printf("Суббота\n");
                    break;
                case 7:
                    printf("Воскресенье\n");
                    break;
            }
            break;

        case 2: // Нумерация с воскресенья
            switch (day) {
                case 1:
                    printf("Воскресенье\n");
                    break;
                case 2:
                    printf("Понедельник\n");
                    break;
                case 3:
                    printf("Вторник\n");
                    break;
                case 4:
                    printf("Среда\n");
                    break;
                case 5:
                    printf("Четверг\n");
                    break;
                case 6:
                    printf("Пятница\n");
                    break;
                case 7:
                    printf("Суббота\n");
                    break;
            }
            break;

        default:
            printf("Ошибка! Выберите вариант 1 или 2.\n");
    }
}
