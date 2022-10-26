#include "Header.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    triangle tr;
    std::cout << "Введите значение первой стороны\n";
    std::cin >> tr.a;
    std::cout << "Введите значение второй стороны\n";
    std::cin >> tr.b;
    std::cout << "Введите значение угла между сторонами\n";
    std::cin >> tr.corner;

    std::cout << "1. Увеличение/уменьшение размера угла на заданное количество процентов\n"
        << "2. Определение вида треугольника по количеству равных сторон\n"
        << "3. Определение расстояния между центрами вписанной и описанной окружности\n"
        << "4. Определение значений углов\n";
    int choice;
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        std::cout << "Что сделать с углом?\n"
            << "1. Увеличить\n" << "2. Уменьшить\n";
        int mes;
        std::cin >> mes;
        std::cout << "На сколько процентов?\n";
        int perc;
        std::cin >> perc;
        tr.ChangingTheAngle(perc, tr.corner, mes);
        std::cout << "Свойства треугольника:\n"
            << "a = " << tr.a << std::endl
            << "b = " << tr.b << std::endl
            << "corner = " << tr.corner << std::endl;
        break;
    }
    return 0;
}

