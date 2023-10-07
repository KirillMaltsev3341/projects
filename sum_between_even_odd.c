#include <stdio.h>
#include <stdlib.h>
#include "index_first_even.h"
#include "index_last_odd.h"

#ifndef SUM_BETWEEN_EVEN_ODD_C
#define SUM_BETWEEN_EVEN_ODD_C

int sum_between_even_odd(int array[], int size) {
    int sum = 0;
    for (int i = index_first_even(array, size); i < index_last_odd(array, size); i++) {
        sum += abs(array[i]);
    }
    return sum;
}

#endif