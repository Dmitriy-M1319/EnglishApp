#ifndef TEST_H
#define TEST_H

#include <string>
#include "Date.h"

class Test
{
private:
    int test_id;
    DateTime::Date test_date;
    // можно установить short, так как количество процентов не превышает 100
    short result;
    // Возможно, лучше сделать enum
    std::string test_variant;

public:
    Test(int test_id, DateTime::Date& date, short result, std::string variant);
    
    Test(int test_id, DateTime::Date& date, std::string variant);

    int gei_id();
    DateTime::Date& get_date();
    short get_result();
    std::string& get_test_variant();

    void set_result(short res);

};

#endif
