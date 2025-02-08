#include "../include/user.h"

User::User(const std::string &login, const std::string &password) {
    login_ = login;
    password_ = password;
}

User::User(
    const std::string &login,
    const std::string &password,
    const std::string &firstName,
    const std::string &lastName)
{
    login_ = login;
    password_ = password;
    firstName_ = firstName;
    lastName_ = lastName;
}

void User::changeLogin(const std::string &login, const std::string &password) {
    if (password_ != password) {
        throw std::invalid_argument("Wrong password");
    }

    login_ = login;
}
