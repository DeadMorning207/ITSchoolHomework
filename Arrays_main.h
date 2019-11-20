#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void findArithmeticMean ()
{
    int numbers[10] = {5, 4, -10, 24, 15, 62, 1, 8, 9, 0};
    int quanity = 0;
    float arifmeticMean = 0;

    printf("Массив - {");
    for (int k = 0; k<10; k++)
    {
        printf("%d, ", numbers[k]);
        arifmeticMean += numbers[k] * 1.0;
        quanity += 1;
    }
    printf("}\n\n");

    arifmeticMean = arifmeticMean/(quanity*1.0);
    printf("Среднее арифметическое число: %f\n", arifmeticMean);
    printf("Числа, меньшие среднего арифметического: {");
    for (int a = 0; a<10; a++)
    {
        if ((float)numbers[a]<arifmeticMean)
        {
            printf("%d ",numbers[a]);
        }
    }
     printf("}");

}

void findTwoSmallestNumbers()
{
    int numbers[8] = {89, 4, -9, 2, 74, -63, 8, 45};
    int small = 10000;
    int smallest = 1000 ;

    printf("Массив - {");
    for (int k = 0; k<8; k++)
    {
        if (numbers[k]<smallest)
        {
            small = smallest;
            smallest = numbers[k];
        }
        else if (numbers[k]<small)
        {
            small = numbers[k];
        }
        printf("%d, ", numbers[k]);
    }
    printf("}\n\n");
    printf("Наименьшие числа массива: %d %d\n\n",smallest, small );

}
/*
void deleteNegativeArrayNumbers()
{
    int element;
    int numbers[10];
    int indexes[10];
    int index = 0;


    srand(time(NULL));

    for (int k = 0; k < 10; k++)
    {
     numbers[k] = 1 + rand() % 30;
    }


    for (int f  = (1 + rand() % 10); f<10; f++)
    {
        element = (1 + rand() % 10);
        numbers[element] = numbers[element] * -1;
    }
    for (int i = 0; i < 10; i++)
    {
     printf("%d ", numbers[i]);
    }
    printf("\n");

    for (int k = 0; k<10; k++)
    {
        if (numbers[k]>0)
        {
         indexes[index] = numbers[k];
         index += 1;
        }
    }
    int pozitiveNumbers[index+1];
    for (int k = 0; k<index+1; k++)
    {
        pozitiveNumbers[k] = numbers[indexes[k]];
    }
    for (int i = 0; i < 3; i++)
    {
     printf("%d ", pozitiveNumbers[i]);
    }
}
*/

void bubbleSort()
{
   int numbers[10];
   int bubble;

   srand(time(NULL));
   for (int k = 0; k < 10; k++)
    {
     numbers[k] = 1 + rand() % 30;
    }

    printf("Несортированный массив\n");
    for (int i = 0; i < 10; i++)
    {
     printf("%d ", numbers[i]);
    }
    printf("\n");

    for (int i = 0; i < 9; i++)
     {
        for (int j = 0; j < 9 - i; j++)
            {
             if (numbers[j] > numbers[j + 1])
                 {
                    bubble = numbers[j];
                    numbers[j] = numbers[j + 1];
                    numbers[j + 1] = bubble;
                 }
            }
    }
    printf("Сортированный массив\n");
    for (int i = 0; i < 10; i++)
    {
     printf("%d ", numbers[i]);
    }
    printf("\n");
}



