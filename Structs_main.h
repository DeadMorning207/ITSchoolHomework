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
    //Пустой конструктор - костыль для работы с массивами структур
    }
};

void printForm (string name, string surname, string birthday)
{
    std::cout << "Имя: " << name << std::endl; //TODO: исправить неправильный вывод строк
    std::cout << "Фамилия: " << surname << std::endl;
    std::cout << "Дата рождения: " << birthday << std::endl;
}

int structTask()
{
    Student students[13];
    setlocale (LC_ALL, "Russian");

    string name, surname, birthday;
    int physicPoint, mathPoint, chemistryPoint;

    for (int counter = 1; counter <11; counter++)
    {
        printf("Введите имя %d студента: ", counter);
        cin >> name;

        printf("Введите фамилию %d студента: ", counter);
        cin >> surname;

        printf("Введите дату рождения %d студента в формате дд.мм.гггг: ", counter);
        cin >> birthday;

        printf("Введите балл по физике %d студента: ", counter);
        scanf("%d", &physicPoint);

        printf("Введите балл по математике %d студента: ", counter);
        scanf("%d", &mathPoint);

        printf("Введите балл по химии %d студента: ", counter);
        scanf("%d", &chemistryPoint);

        Student student(name, surname, birthday, physicPoint, mathPoint, chemistryPoint);

        students[counter] = student;
    }


    int operation = 1;
    while (operation != 0)
    {
    printf("\n\nВведите номер функции, которая вам требуется:\n"
           "1 - Анкеты отличников\n"
           "2 - Анкеты троечников\n"
           "3 - Анкеты успевающих на хорошо и отлично\n"
           "4 - Анкеты тех, у кого отлично по физике\n"
           "5 - Анкеты отличников с одной четверкой\n"
           "6 - Фамилии учеников без троек\n"
           "7 - Список учеников, сортированный по среднему баллу\n"
           "8 - Список студентов, у которых собственный средний балл выше среднего балла группы\n"
           "9 - Список студентов, у которых собственный средний балл ниже среднего балла группы\n"
           "10 - Список студентов, у которых собственный средний балл отличается от среднего балла группы не более чем на 20%\n"
           "11 - Упорядоченный список студентов по дате рождения\n"
           "12 - Упорядоченный список студентов по алфавиту\n");
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
         //TODO: Проблема с сортировкой по строкам


        }
    }
}





