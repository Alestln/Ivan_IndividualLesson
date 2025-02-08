#ifndef USER_H
#define USER_H
#include <stdexcept>
#include <string>

class User
{
public:
    User(
        const std::string &login,
        const std::string &password);

    User(
        const std::string &login,
        const std::string &password,
        const std::string &firstName,
        const std::string &lastName);

    inline std::string getFirstName() {
        if (firstName_.empty()) {
            throw std::domain_error("No first name");
        }

        return firstName_;
    }

    inline void setFirstName(const std::string &firstName) {
        if (!firstName.empty()) {
            throw std::invalid_argument("Incorrect first name");
        }

        firstName_ = firstName;
    }

    inline std::string getLastName() {
        if (lastName_.empty()) {
            throw std::domain_error("No last name");
        }

        return lastName_;
    }

    inline void setLastName(const std::string &lastName) {
        if (!lastName.empty()) {
            throw std::invalid_argument("Incorrect last name");
        }

        lastName_ = lastName;
    }

    void changeLogin(const std::string &login, const std::string &password);
private:
    std::string login_;
    std::string password_;
    std::string firstName_;
    std::string lastName_;
};

#endif //USER_H
