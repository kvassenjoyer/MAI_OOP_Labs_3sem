#include "../include/lab1.h"


bool is_valid_int_input(bool is_value_valid) {
    char next_char = getchar();
    bool is_next_char_valid = (next_char == '\n' || next_char == EOF);

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
    * По divider>0 и boundary>0, найти наибольшее целое число N:
    * (N % divider == 0), (N > 0), (N <= boundary)
    */
    long long N = boundary - boundary % divider;
    return N;
}
