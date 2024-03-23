#include "lib.h"
#include <iostream>

void validateInputData(int n, int m) {
    if (n <= 0) {
        throw std::invalid_argument("n must be greater than 0");
    }

    if (m <= 0) {
        throw std::invalid_argument("m must be greater than 0");
    }
}

int calculateAmmountOfBreaks(int n, int m) {
    validateInputData(n, m);
    return (m - 1) + (n - 1);
}

int tryCalculateAmmountOfBreaks(int n, int m) {
    try {
        return calculateAmmountOfBreaks(n, m);
    } catch (const std::invalid_argument &e) {
        return 0; 
    }
}