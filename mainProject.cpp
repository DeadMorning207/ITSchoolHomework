#include "Arrays_main.h"
#include "Switch_main.h"
#include "Calculator_main.h"
#include "Structs_main.h"


int main()
{
    setlocale (LC_ALL, "Russian");
    char operation;
    printf("�������� ��������� ��� ����������: \n1 - �����������\n2 - ������� �� switch\n3 - �������\n 4 - ���������\n");
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


            printf ("���������: \n1 - �������� \n2 - ������� ��������� \n3 - �������� \n4 - ������������������ ����� \n5 - ������� ����� \n6 - ����� � �������� \n7 - ����� �� ���������\n��� ������ ������� ������ ������\n");
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
                        printf ("������ �������� �������������\n");
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
            printf ("���������: \n1 - ���������� �����, ������� �������� ��������������� \n2 - ���������� 2 ���������� ����� \n3 - ���������� ���������\n��� ������ ������� ������ ������\n");
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
                        printf ("������ �������� �������������\n");
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

