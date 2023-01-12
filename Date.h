#ifndef DATE_H
#define DATE_H

// Структура, предоставляющая дату и время (часы, минуты)
// Так как в стандартной библиотеке C++ нет такого представления, как дата
// То временно опишем его сами, в будущем возможно задействуем boost

#include <iostream>

namespace DateTime
{
    struct Date
    {
        int year;
        int month;
        int day;
        int hours;
        int minutes;

        Date(int year, int month, int day, int hours, int minutes);
        Date(int year, int month, int day);
        std::ostream& operator<<(const Date& date); 
        std::istream& operator>>(Date& date);
    };

}

#endif
