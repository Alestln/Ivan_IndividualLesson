#ifndef RACE_H
#define RACE_H
#include "Snail.h"

class Race {
private:
    std::string title_;
    Snail* winner_;
    int finish_;
public:
    const Snail* snails_;
    explicit Race(const std::string& title, const Snail* snails, const int &finish);

    ~Race();
};

#endif //RACE_H
