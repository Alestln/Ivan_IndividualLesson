#include <iostream>
#include <vector>

#include "../include/user.h"
#include "../include/utility.h"

/*int sum(const int left, const int right) noexcept
{
    if (left == 1) {
        throw std::invalid_argument("Invalid input");
    }

    return left + right;
}*/

int main()
{
    /*try {
        sum(1,3);
    }
    catch (const std::invalid_argument& e) {

    }*/

    /*constexpr int a = 15;

    std::cout << universalNumber(a);*/

    /*const auto x = multiply<float>(3, 5);*/

    /*std::string text1 = "abc";
    std::string text2 = "abc";

    if (text1 == text2) {
        std::cout << "text1" << std::endl;
    }*/

    User user1("login", "password");
    User user2("superkeks", "12345", "Kate", "Shepard");

    user1.setFirstName("Artur");
    user1.setLastName("Morgan");

    try {
        std::cout << user1.getFirstName() << " " << user1.getLastName() << std::endl;
    }
    catch (std::domain_error &ex) {
        std::cout << ex.what() << std::endl;
    }

    user1.changeLogin("newLogin", "password");

    std::cout << "End" << std::endl;
}
