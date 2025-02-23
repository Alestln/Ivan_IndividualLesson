#include "../include/Race.h"

Race::Race(const std::string &title, const Snail *snails, const int &finish) {
    title_ = title;
    snails_ = snails;
    finish_ = finish;
    winner_ = nullptr;
}

Race::~Race() {
    delete[] snails_;
    delete winner_;
}
