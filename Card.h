#ifndef CARD_H
#define CARD_H

#include <string>
#include <utility>
#include <iostream>

class Card 
{
public:
    // Конструктор по умолчанию
    Card();

    // Конструкторы копирования
    Card(const std::string& foreign, const std::string& translated);
    Card(const Card& card);

    // Конструкторы перемещения
    Card(std::string&& foreign, std::string&& translated);
    Card(Card&& card);

    // Мы пока не знаем как этого делать, оставим на потом
    std::string& operator=(const Card&& card);
    std::ostream& operator<<(const Card& card);
    std::istream& operator>>(Card& card);

    // Геттеры и сеттеры
    std::string& get_foreign();
    std::string& get_translated();

    void set_foreign(std::string& str);
    void set_foreign(std::string&& str);
    void set_translated(std::string& str);
    void set_translated(std::string&& str);


private:
    std::string foreign_word;
    std::string translated_word;
};


#endif
