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

    printf ("\n������� ���������� ����������� ���������: ");
    scanf ("%d", &quanity);

    for (int counter = 0; counter < quanity; counter ++)
        {
        printf ("������� ������� ���������� %d: ", counter + 1);
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
    printf ("\n���������� ������� = %d \n���������� ������� = %d \n������� ������� = %d\n", years_max, years_min, years_middle);
    }

void checkMultiplicationTable()
    {
    int firstNum;
    int secondNum;
    int result;
    int operation;

    printf ("������� ������ �����: ");
    scanf ("%d", &firstNum);

    printf ("������� ������ �����: ");
    scanf ("%d", &secondNum);

    printf ("\n��������� ���������: ");
    scanf ("%d", &result);

    if (result == (firstNum * secondNum))
        {
        printf ("\n�� �����, ���������� �����: %d\n", (firstNum * secondNum));
        }
    else
        {
        printf ("\n�� �� �������, ���������� �����: %d\n", (firstNum * secondNum));
        }

    }

void sumOddRange()
    {
    int firstNumber;
    int lastNumber;
    int sum = 0;
    int operation;

    printf ("������� ������ ����� ���������: ");
    scanf ("%d", &firstNumber);

    printf ("������� ��������� ����� ���������: ");
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
        printf ("������� %d �����: ", counter);
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
    printf ("\n���������� ����� - %d\n������� �������������� - %f\n", quanity, middle);


    }

void CountSquareOfNumber()
    {
    int number;
    int option;
    int square;


    printf ("������� �����, ������� �������� ��� �����: ");
    //scanf("%d", &number);
    scanf ("%d", &number);
    square = pow (number, 2);
    printf ("������� ����� %d ����� %d \n\n", number, square);
    }

void CountApples()
    {
    int appleNumber;

    int option;

    int quanity = 15;
    int counter = 1;

    while (quanity > 0)
        {
        printf ("\n� ��� �������� %d �����\n", quanity);
        printf ("������� ����� �������� � %d ������?: ", counter);
        scanf ("%d", &appleNumber);

        quanity -= appleNumber;


        if (quanity < 0)
            {
            printf ("\n��������� ����� ������, ��� ���� �� ������ ������� ������\n");
            quanity += appleNumber;
            continue;
            }

        counter += 1;

        }

    printf ("\n� ��� �������� %d �����, �����������\n", quanity);
    }
 /*
int main()
    {
    int option;
    setlocale (LC_ALL, "Russian");

    while (true)
        {


        printf ("���������: \n1 - �������� \n2 - ������� ��������� \n3 - �������� \n4 - ������������������ ����� \n5 - ������� ����� \n6 - ����� � �������� \n7 - ����� �� ���������\n��� ������ ������� ������ ������\n");
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
                    printf ("������ �������� �������������\n");
                    break;
                    }
            }
        }

    }
*/
