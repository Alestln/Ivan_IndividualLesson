#ifndef UTILITY_H
#define UTILITY_H

extern void print();

inline int sum(const int a, const int b) {
    return a + b;
}

constexpr int universalNumber(const int value) {
    return 42 + value;
}

template<typename T>
T multiply(const T left, const T right) {
    return left * right;
}

#endif //UTILITY_H