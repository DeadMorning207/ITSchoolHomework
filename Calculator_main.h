#include <stdio.h>
#include <iostream>

using namespace std;

int Calculate()
    {
        float first_num;
        float second_num;
        char symbol;
        float amount;

        printf("Give operation: ");
        scanf("%f %c %f", &first_num, &symbol, &second_num);


        if (symbol == '+')
        {
            amount = first_num + second_num;
        }

        else if (symbol == '-')
        {
            amount = first_num - second_num;
        }

        else if (symbol == '*')
        {
            amount = first_num * second_num;
        }

        else if (symbol == '/')
        {
            amount = first_num / second_num;
        }

        else if ((symbol != '+') && (symbol != '-') && (symbol != '*') && (symbol != '/'))
        {
            printf("None correct symbol");
        }

        else
        {
        printf("\nAmount: ", amount);
        }
        printf("\nAmount: %f", amount);
    }
