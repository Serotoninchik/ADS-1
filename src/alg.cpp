
@@ -1,20 +1,49 @@
// Copyright 2022 NNTU-CS
#ifndef INCLUDE_ALG_H_
#define INCLUDE_ALG_H_
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
// вставьте код функции
    if (value <= 1)
        return false;
    for (uint64_t i = 2; i * i <= value; i++)
        if (value % i == 0)
            return false;
    return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
    uint64_t res = 0;
    for (uint64_t i = 2; n > 0; i++) {
        uint64_t prime = 1;
        for (uint64_t j = 2; j * j <= i; j++)
            if (i % j == 0) {
                prime = 0;
                break;
            }
        if (prime) {
            n--;
            res = i;
        }
    }
    return res;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
    uint64_t res = 0;
    for (uint64_t i = value+1; res == 0; i++) {
        uint64_t prime = 1;
        for (uint64_t j = 2; j * j <= i; j++)
            if (i % j == 0) {
                prime = 0;
                break;
            }
        if (prime)
            res = i;
    }
    return res;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
    uint64_t res = 0;
    for (uint64_t i = hbound - 1; i > 1; i--) {
        uint64_t prime = 1;
        for (uint64_t j = 2; j * j <= i; j++)
            if (i % j == 0) {
                prime = 0;
                break;
            }
        if (prime)
            res += i;
    }
    return res;
}
