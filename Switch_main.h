#include <stdio.h>
#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

void countAgeOfGym()
    {
    int quanity ;
    int years_min = 1000;
    int years_max = 0;
    int years_middle = 0;
    int age;
    int operation;

    printf ("\nВведите количество посетителей спортзала: ");
    scanf ("%d", &quanity);

    for (int counter = 0; counter < quanity; counter ++)
        {
        printf ("Введите возраст посетителя %d: ", counter + 1);
        scanf ("%d", &age);
        years_middle += age * 1.0;

        if (age > years_max)
            {
            years_max = age;
            }

        if (age < years_min)
            {
            years_min = age;
            }
        }

    years_middle = years_middle / (quanity * 1.0);
    printf ("\nНаибольший возраст = %d \nНаименьший возраст = %d \nСредний возраст = %d\n", years_max, years_min, years_middle);
    }

void checkMultiplicationTable()
    {
    int firstNum;
    int secondNum;
    int result;
    int operation;

    printf ("Введите первое число: ");
    scanf ("%d", &firstNum);

    printf ("Введите второе число: ");
    scanf ("%d", &secondNum);

    printf ("\nРезультат умножения: ");
    scanf ("%d", &result);

    if (result == (firstNum * secondNum))
        {
        printf ("\nВы правы, правильный ответ: %d\n", (firstNum * secondNum));
        }
    else
        {
        printf ("\nВы не угадали, правильный ответ: %d\n", (firstNum * secondNum));
        }

    }

void sumOddRange()
    {
    int firstNumber;
    int lastNumber;
    int sum = 0;
    int operation;

    printf ("Введите первое число диапазона: ");
    scanf ("%d", &firstNumber);

    printf ("Введите последнее число диапазона: ");
    scanf ("%d", &lastNumber);

    for (int a = firstNumber; a < lastNumber + 1; a++)
        {
        if (a % 2 != 0)
            {
            sum += a;
            }
        }

    printf ("%d\n", sum);
    }

void countSequenceOfNumber()
    {
    int number = 1 ;
    int sum;
    int quanity =  0;
    float middle = 0;
    int counter = 1;
    int operation;

    while (number != 0)
        {
        printf ("Введите %d число: ", counter);
        scanf ("%d", &number);

        if (number == 0)
            {
            break;
            }

        counter += 1;
        quanity += 1;
        middle += number;
        }

    middle = middle / (quanity * 1.0);
    printf ("\nКоличество чисел - %d\nСреднее арифметическое - %f\n", quanity, middle);


    }

void CountSquareOfNumber()
    {
    int number;
    int option;
    int square;


    printf ("Введите число, квадрат которого вам нужен: ");
    //scanf("%d", &number);
    scanf ("%d", &number);
    square = pow (number, 2);
    printf ("Квадрат числа %d равен %d \n\n", number, square);
    }

void CountApples()
    {
    int appleNumber;

    int option;

    int quanity = 15;
    int counter = 1;

    while (quanity > 0)
        {
        printf ("\nУ вас осталось %d яблок\n", quanity);
        printf ("Сколько яблок положить в %d машину?: ", counter);
        scanf ("%d", &appleNumber);

        quanity -= appleNumber;


        if (quanity < 0)
            {
            printf ("\nВыгружено яблок больше, чем есть на складе давайте заново\n");
            quanity += appleNumber;
            continue;
            }

        counter += 1;

        }

    printf ("\nУ вас осталось %d яблок, поздравляем\n", quanity);
    }
 /*
int main()
    {
    int option;
    setlocale (LC_ALL, "Russian");

    while (true)
        {


        printf ("Программы: \n1 - Спортзал \n2 - Таблица умножения \n3 - Диапазон \n4 - Последовательность чисел \n5 - Квадрат числа \n6 - Склад с яблоками \n7 - Выход из программы\nДля выбора введите нужный символ\n");
        scanf ("%d", &option);

        switch (option)
            {
            case (1) :
                    {
                    gym();
                    break;
                    }

            case (2) :
                    {
                    multiplication_table();
                    break;
                    }

            case (3) :
                    {
                    range();
                    break;
                    }

            case (4) :
                    {
                    sequence_of_number();
                    break;
                    }

            case (5) :
                    {
                    square_of_number();
                    break;
                    }

            case (6) :
                    {
                    vegetables();
                    break;
                    }

            case (7) :
                    {
                    exit (1);
                    }

            default:
                    {
                    printf ("Введен неверный идентификатор\n");
                    break;
                    }
            }
        }

    }
*/
