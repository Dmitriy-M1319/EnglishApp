#ifndef TEST_CARD_DATABASE_H
#define TEST_CARD_DATABASE_H

#include "TestCard.h"
#include "Card.h"
#include <vector>
#include <string>

class TestCardDatabase
{
    virtual TestCard& add_card(const TestCard& card) = 0;
    virtual TestCard& update_card(int id, const TestCard& card) = 0;
    virtual int delete_card(int card_id) = 0;

    virtual TestCard& get_card_by_id(int id) = 0;
    virtual std::vector<TestCard>& get_all_cards() = 0;
    virtual std::vector<TestCard>& get_by_test(int test_id) = 0;
    virtual std::vector<Card>& get_by_result(bool result) = 0;

    virtual void clear_db() = 0;
    virtual int save_db(const std::string filename) = 0;

    virtual ~TestCardDatabase() {}
};
#endif
