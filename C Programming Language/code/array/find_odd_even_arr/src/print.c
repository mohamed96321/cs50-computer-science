#include <stdio.h>
#include "print.h"

void print_nums(bool *odd_nums, int odd_count, bool *even_nums, int even_count)
{
    printf("Odd Numbers: ");
    for (int i = 0; i < odd_count; ++i) {
        if (odd_nums[i]) {
            printf("%d ", i * 2 + 1);
        }
    }
    printf("\n");

    printf("Even Numbers: ");
    for (int i = 0; i < even_count; ++i) {
        if (even_nums[i]) {
            printf("%d ", i * 2);
        }
    }
    printf("\n");
}

