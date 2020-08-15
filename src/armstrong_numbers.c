#include "armstrong_numbers.h"
#include <math.h>

bool is_armstrong_number(int x) {
    // 0 is an armstrong number
    if (x <= 1 && x >= 0) {
        return true;
    }
    // calculate number of digits using log10
    int digits = log10(x) + 1;

    // find sum of each digit to the power of total digits
    int sum = 0;
    for (int i = x; i > 0; i /= 10) {
        sum += pow(i % 10, digits);
    }

    return (sum == x);
}