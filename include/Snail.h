#ifndef SNAIL_H
#define SNAIL_H

#include <string>

class Snail {
private:
    int speed_;
    int distance_;
    std::string name_;

public:
    explicit Snail(const std::string &name, const int &speed);

    int getDistance() const {
        return distance_;
    }

    const std::string& getName() const {
        return name_;
    }

    void move();
};

#endif //SNAIL_H
