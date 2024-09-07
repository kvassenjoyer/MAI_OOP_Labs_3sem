#include <iostream>
#include <limits>

// Если надоест писать long long
// typedef long long ll; // C++03 equivalent
// using ll = long long; // // C++11

bool is_valid_input(bool is_value_valid) {
    char next_char = getchar();
    bool is_next_char_valid = (next_char=='\n' || next_char==EOF);

    if (!is_next_char_valid) {
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }

    if (std::cin.fail() || !is_value_valid || !is_next_char_valid) {
        std::cerr << "ERROR: Invalid input. Try again\n\n";
        return false;
    }
    return true;
}

long long lab1_var15(long long divider, long long boundary) {
    /*
    * Вариант 15:
    * По divider и boundary, найти наибольшее целое число N:
    * (N % divider == 0) and (N <= boundary) and (N > 0)
    */

    long long N = boundary - boundary % divider;

    // Проверка из-за чрезвычайной тревожности (на случай космических лучей)
    if (! ( (N > 0) && (N % divider == 0) && (N <= boundary) )) {
        std::cerr << "ERROR: Unexpected error\n";
        exit(2);
    }

    return N;
}

int main() {
    long long divider {0}, boundary {0};
    
    do {
        std::cout << "Enter divider: ";
        std::cin >> divider;
    } while (is_valid_input(divider > 0) == false);

    do {
        std::cout << "Enter right boundary: ";
        std::cin >> boundary;
    } while (is_valid_input(boundary >= divider && boundary > 0) == false);

    std::cout << "Answer: ";
    std::cout << lab1_var15(divider, boundary);
    
    return 0;
}