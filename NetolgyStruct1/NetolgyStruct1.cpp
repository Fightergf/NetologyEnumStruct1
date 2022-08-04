#include <iostream>
enum mounths
{
    January = 1, //Январь
    February, //Февраль
    March, //Март
    April, //Апрель
    May, //Май
    June, //Июнь
    July, //Июль
    August, //Август
    September, //Сентябрь
    October, //Октябрь
    November, //Ноябрь
    December, //Декабрь
    Exit = 0
};

int main()
{
    setlocale(LC_ALL, "Ru");

    int user = 0;
    while (true)
    {
        std::cout << std::endl;
        std::cout << "Введите номер месяца или введите ( 0 ) для выхода: ";

        std::cin >> user;
        mounths mon = static_cast<mounths>(user);

            switch (mon)
            {
            case mounths::January:
                std::cout << "Январь";
                break;
            case mounths::February:
                std::cout << "Февраль";
                break;
            case mounths::March:
                std::cout << "Март";
                break;
            case mounths::April:
                std::cout << "Апрель";
                break;
            case mounths::May:
                std::cout << "Май";
                break;
            case mounths::June:
                std::cout << "Июнь";
                break;
            case mounths::July:
                std::cout << "Июль";
                break;
            case mounths::August:
                std::cout << "Август";
                break;
            case mounths::September:
                std::cout << "Сентябрь";
                break;
            case mounths::October:
                std::cout << "Октябрь";
                break;
            case mounths::November:
                std::cout << "Ноябрь";
                break;
            case mounths::December:
                std::cout << "Декабрь";
                break;
            case mounths::Exit:
                return false;
            default:
                std::cout << "Ошибка такого месяца не существует!!!";
                std::cout << std::endl;
            }
        }
}