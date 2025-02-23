#include "../include/Snail.h"

Snail::Snail(const std::string &name, const int &speed) {
    name_ = name;
    speed_ = speed;
    distance_ = 0;
}

void Snail::move() {
    distance_ += speed_;
}

