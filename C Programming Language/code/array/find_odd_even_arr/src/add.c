#include "add.h"
#include "handle_error.h"

void add_nums(int *nums, int *nums_size, int num)
{
    if (num < 0)
    {
        handle_error("You can't add negative numbers");
    }

    nums[*nums_size] = num;
    (*nums_size)++;
}
