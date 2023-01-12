#ifndef TEST_CARD_H
#define TEST_CARD_H

// Класс "особой" карточки для тестирования
#include <string>

class TestCard
{
private:
    int id;
    int parent_card_id;
    int test_id;
    std::string answer;
    bool result;

public:
    TestCard();
    TestCard(std::string& answer);
    TestCard(std::string&& answer);
    TestCard(std::string& answer, bool& result);
    TestCard(std::string&& answer, bool&& result);

    std::string& get_answer() const;
    bool get_result();

    void set_answer(const std::string& answer);
    void set_answer(std::string&& answer);
};

#endif
