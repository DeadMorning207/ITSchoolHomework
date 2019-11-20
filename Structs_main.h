#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string firstName, secondName, birthday;
    int physicPoint, mathPoint, chemistryPoint;
    float middlePoint;
    Student (string firstName, string secondName, string birthday, int physicPoint, int mathPoint, int chemistryPoint)
    {
        this->firstName = firstName;
        this->secondName = secondName;
        this->physicPoint = physicPoint;
        this->mathPoint = mathPoint;
        this->chemistryPoint = chemistryPoint;
        this->birthday = birthday;
        middlePoint = (mathPoint+chemistryPoint+physicPoint)/3;
    }

    Student()
    {
    //������ ����������� - ������� ��� ������ � ��������� ��������
    }
};

void printForm (string name, string surname, string birthday)
{
    std::cout << "���: " << name << std::endl; //TODO: ��������� ������������ ����� �����
    std::cout << "�������: " << surname << std::endl;
    std::cout << "���� ��������: " << birthday << std::endl;
}

int structTask()
{
    Student students[13];
    setlocale (LC_ALL, "Russian");

    string name, surname, birthday;
    int physicPoint, mathPoint, chemistryPoint;

    for (int counter = 1; counter <11; counter++)
    {
        printf("������� ��� %d ��������: ", counter);
        cin >> name;

        printf("������� ������� %d ��������: ", counter);
        cin >> surname;

        printf("������� ���� �������� %d �������� � ������� ��.��.����: ", counter);
        cin >> birthday;

        printf("������� ���� �� ������ %d ��������: ", counter);
        scanf("%d", &physicPoint);

        printf("������� ���� �� ���������� %d ��������: ", counter);
        scanf("%d", &mathPoint);

        printf("������� ���� �� ����� %d ��������: ", counter);
        scanf("%d", &chemistryPoint);

        Student student(name, surname, birthday, physicPoint, mathPoint, chemistryPoint);

        students[counter] = student;
    }


    int operation = 1;
    while (operation != 0)
    {
    printf("\n\n������� ����� �������, ������� ��� ���������:\n"
           "1 - ������ ����������\n"
           "2 - ������ ����������\n"
           "3 - ������ ���������� �� ������ � �������\n"
           "4 - ������ ���, � ���� ������� �� ������\n"
           "5 - ������ ���������� � ����� ���������\n"
           "6 - ������� �������� ��� �����\n"
           "7 - ������ ��������, ������������� �� �������� �����\n"
           "8 - ������ ���������, � ������� ����������� ������� ���� ���� �������� ����� ������\n"
           "9 - ������ ���������, � ������� ����������� ������� ���� ���� �������� ����� ������\n"
           "10 - ������ ���������, � ������� ����������� ������� ���� ���������� �� �������� ����� ������ �� ����� ��� �� 20%\n"
           "11 - ������������� ������ ��������� �� ���� ��������\n"
           "12 - ������������� ������ ��������� �� ��������\n");
    scanf("%d", &operation);

    switch (operation)
        {
        case 1:
            for (int a = 1; a<11; a++)
            {
                if ((students[a].chemistryPoint ==  5) and (students[a].mathPoint == 5) and (students[a].physicPoint == 5))
                {
                    printForm(students[a].firstName, students[a].secondName, students[a].birthday);
                }

            }
            break;
        case 2:
            {
                for (int a = 1; a<11; a++)
            {
                if ((students[a].chemistryPoint == 3) and (students[a].mathPoint == 3) and (students[a].physicPoint == 3))
                {
                    printForm(students[a].firstName, students[a].secondName, students[a].birthday);
                }
            }

            }
            break;
        case 3:
            {
                for (int a = 1; a<11; a++)
            {
                if ((students[a].chemistryPoint == 4 or students[a].chemistryPoint ==  5) and (students[a].mathPoint == 4 or students[a].mathPoint ==  5) and (students[a].physicPoint == 4 or students[a].physicPoint == 5))
                {
                    printForm(students[a].firstName, students[a].secondName, students[a].birthday);
                }
            }

            }
            break;
        case 4:
            for (int a = 1; a<11; a++)
            {
                if ((students[a].physicPoint == 5))
                {
                    printForm(students[a].firstName, students[a].secondName, students[a].birthday);
                }


            }
            break;
        //TODO: case 5:

        case 6:
            {
                for (int a = 1; a<11; a++)
            {
                if ((students[a].chemistryPoint != 3) and (students[a].mathPoint != 3) and (students[a].physicPoint != 3))
                {
                    printForm(students[a].firstName, students[a].secondName, students[a].birthday);
                }
            }

            }
            break;

        case 7:
            {

            }
        case 8:
            {
              float mediumBall = 0;
              for  (int a = 1; a<11; a++)
              {
                 mediumBall += students[a].chemistryPoint + students[a].mathPoint + students[a].physicPoint;
              }
              mediumBall  = mediumBall * 1.0 / 30;
              for  (int a = 1; a<11; a++)
              {

                 if (students[a].middlePoint > mediumBall)
                 {
                    printForm(students[a].firstName, students[a].secondName, students[a].birthday);
                 }
              }


            }
            break;

        case 9:
            {
              float mediumBall = 0;
              for  (int a = 1; a<11; a++)
              {
                 mediumBall += students[a].chemistryPoint + students[a].mathPoint + students[a].physicPoint;
              }
              mediumBall  = mediumBall * 1.0 / 30;
              for  (int a = 1; a<11; a++)
              {

                 if (students[a].middlePoint < mediumBall)
                 {
                    printForm(students[a].firstName, students[a].secondName, students[a].birthday);
                 }
              }
            }
        case 10:
            {
              float mediumBall = 0;
              for  (int a = 1; a<11; a++)
              {
                 mediumBall += students[a].chemistryPoint + students[a].mathPoint + students[a].physicPoint;
              }
              mediumBall  = mediumBall * 1.0 / 30;
              for  (int a = 1; a<11; a++)
              {

                 if ((students[a].middlePoint * 1.2 < mediumBall) or (students[a].middlePoint * 0.8 > mediumBall) )
                 {
                    printForm(students[a].firstName, students[a].secondName, students[a].birthday);
                 }
              }
            }
         //TODO: �������� � ����������� �� �������


        }
    }
}





