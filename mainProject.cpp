#include "Arrays_main.h"
#include "Switch_main.h"
#include "Calculator_main.h"
#include "Structs_main.h"


int main()
{
    setlocale (LC_ALL, "Russian");
    char operation;
    printf("Выберите программу для выполнения: \n1 - Калькулятор\n2 - Задание со switch\n3 - Массивы\n 4 - Структуры\n");
    scanf("%c", &operation);
    switch(operation)
    {
        case('1'):
        {
         Calculate();
         break;
        }
        case('2'):
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
                        countAgeOfGym();
                        break;
                        }

                case (2) :
                        {
                        checkMultiplicationTable();
                        break;
                        }

                case (3) :
                        {
                        sumOddRange();
                        break;
                        }

                case (4) :
                        {
                        countSequenceOfNumber();
                        break;
                        }

                case (5) :
                        {
                        CountSquareOfNumber();
                        break;
                        }

                case (6) :
                        {
                        CountApples();
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

        case('3'):
            {
            int option;
            while (true)
            {
            printf ("Программы: \n1 - Нахождение чисел, меньших среднего арифметического \n2 - Нахождение 2 наименьших чисел \n3 - Сортировка пузырьком\nДля выбора введите нужный символ\n");
            scanf ("%d", &option);
            switch (option)
                {
                case (1) :
                        {
                        findArithmeticMean();
                        break;
                        }

                case (2) :
                        {
                        findTwoSmallestNumbers();
                        break;
                        }

                case (3) :
                        {
                        bubbleSort();
                        break;
                        }
                default:
                        {
                        printf ("Введен неверный идентификатор\n");
                        break;
                        }

            }
            }
}
    case('4'):
            {
                structTask();
            }

    }
}

