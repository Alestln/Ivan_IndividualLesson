#include <iostream>

#include "../include/Race.h"
#include "../include/Snail.h"

void func(Snail snail) {

}

void test() {
    Snail snail1("Bob", 15);
    Snail snail2("Piter", 17);
    Snail snail3("Jeff", 30);

    Race race("Race 1", new Snail[3]{snail1, snail2, snail3}, 100);
    std::cout << &snail1 << std::endl;

    std::cout << &race.snails_[0] << std::endl;
}

int main()
{
    // 1
    /*Snail snail(10);
    func(snail);*/

    // 2
    /*func(Snail(10));*/

    // 3
    // func(10); - compilation error

    test();
}