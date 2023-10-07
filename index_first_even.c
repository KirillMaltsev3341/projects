#include <stdio.h>
#include <stdlib.h>

#ifndef INDEX_FIRST_EVEN_C
#define INDEX_FIRST_EVEN_C


int index_first_even(int array[], int size) {
    for (int i = 0; i < size; i++) {
        if (abs(array[i]) % 2 == 0) return i;
    }
}

#endif