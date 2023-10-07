#include <stdio.h>
#include <stdlib.h>

#ifndef INDEX_LAST_ODD_C
#define INDEX_LAST_ODD_C

int index_last_odd(int array[], int size) {
    for (int i = size-1; i >= 0; i--) {
        if (abs(array[i]) % 2 != 0) return i;
    }
}

#endif