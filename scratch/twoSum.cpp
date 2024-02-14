#include <iostream>

using namespace std;

int* twoSum(int* nums, int numsSize, int target) {

    int* ans = new int[2];
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }
    return ans;
}

int main() {

    int nums[] = { 2, 3, 4 };
    int target = 6;
    int* ans = twoSum(nums, 3, target);
    if (ans[0] == -1) {
        cout << "No such pair found";
        return 0;
    }
    cout << "The pair is (index): ";
    // cout << "The pair is (value): ";
    cout << ans[0] << ", " << ans[1];
    return 0;
}

/*
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

    vector<int> ans;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                // return indexes
                // ans.push_back(i);
                // ans.push_back(j);

                // return values
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans;
            }
        }
    }
    return ans;
}

int main() {

    vector<int> nums = { 2, 3, 4 };
    int target = 6;
    vector<int> ans = twoSum(nums, target);
    if (ans.size() == 0) {
        cout << "No such pair found";
        return 0;
    }
    // cout << "The pair is (index): ";
    cout << "The pair is (value): ";
    cout << ans[0] << ", " << ans[1];
    return 0;
}
*/
