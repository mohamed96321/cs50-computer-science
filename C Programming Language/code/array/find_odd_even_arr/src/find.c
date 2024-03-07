#include "find.h"

void find_nums(int *nums, int nums_size, bool *odd_nums, int *odd_count, bool *even_nums, int *even_count)
{
    for (int i = 0; i < nums_size; i++)
    {
        if (nums[i] % 2 == 0)
        {
            even_nums[*even_count] = true;
            (*even_count)++;
        }
        else
        {
            odd_nums[*odd_count] = true;
            (*odd_count)++;
        }
    }
}
