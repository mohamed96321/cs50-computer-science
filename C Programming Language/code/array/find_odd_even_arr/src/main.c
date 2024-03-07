#include <stdio.h>
#include <stdbool.h>
#include "find.h"
#include "add.h"
#include "print.h"

int main()
{
    const int MAX_NUMS = 100;
    int nums[MAX_NUMS];
    bool odd_nums[MAX_NUMS], even_nums[MAX_NUMS];
    int odd_count = 0, even_count = 0, nums_size = 0;

    add_nums(nums, &nums_size, 0);
    add_nums(nums, &nums_size, 1);
    add_nums(nums, &nums_size, 2);
    add_nums(nums, &nums_size, 3);
    add_nums(nums, &nums_size, 4);
    add_nums(nums, &nums_size, -1);
    add_nums(nums, &nums_size, 5);

    find_nums(nums, nums_size, odd_nums, &odd_count, even_nums, &even_count);

    print_nums(odd_nums, odd_count, even_nums, even_count);

    return 0;
}
