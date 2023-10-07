#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "index_first_even.h"
#include "index_last_odd.h"
#include "sum_between_even_odd.h"
#include "sum_before_even_and_after_odd.h"

#define ARR_SIZE 100
#define BUF_SIZE 2048

void get_input(char[], char*);
void fill_array(char[], int[], int*);
void allocator(char, int[], int);

int main() {
    char buf[BUF_SIZE];
    char type;
    int array[ARR_SIZE];
    int size = 0;

    get_input(buf, &type);
    fill_array(buf, array, &size);
    allocator(type, array, size);
    return 0;
}

void get_input(char buf[], char *type) {
    fgets(buf, BUF_SIZE, stdin);
    *type = buf[0];
    if (buf[1] != ' ') *type = '-';
}

void fill_array(char buf[], int array[], int *size) {
    char *substr;
    substr = strtok(buf, " ");
    substr = strtok(NULL, " ");

    while (substr != NULL) {
        array[(*size)++] = atoi(substr);
        substr = strtok(NULL, " ");
    }
}

void allocator(char type, int array[], int size) {
    switch(type) {
    case '0':
        printf("%d\n", index_first_even(array, size));
        break;
    case '1':
        printf("%d\n", index_last_odd(array, size));
        break;
    case '2':
        printf("%d\n", sum_between_even_odd(array, size));
        break;
    case '3':
        printf("%d\n", sum_before_even_and_after_odd(array, size));
        break;
    default:
        printf("Данные некорректны\n");
    }
}



// scanf("%d", &num_solution);
//     while (getchar() != '\n') {
//         scanf("%d", &array[array_size]);
//         ++array_size;
//     }