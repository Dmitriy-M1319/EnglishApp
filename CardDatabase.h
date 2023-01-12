#ifndef CARD_DATABASE_H
#define CARD_DATABASE_H

// Абстрактный класс базы данных карточек
#include "Card.h"
#include <vector>
#include <string>

class CardDatabase 
{
public:
    virtual Card& add_card(const Card& card) = 0;
    virtual Card& update_card(int id, const Card& card) = 0;
    virtual int delete_card(int card_id) = 0;

    virtual Card& get_card_by_id(int id) = 0;
    virtual std::vector<Card>& get_last_N_cards(int N) = 0;
    virtual std::vector<Card>& get_all_cards() = 0;
    virtual Card& get_by_testcard_id(int testcard_id) = 0;

    virtual void clear_db() = 0;
    virtual int save_db(const std::string filename) = 0;

    virtual ~CardDatabase() {}
};


#endif

