/*
 * Problem: 1. 两数之和 / Two Sum
 * Link: https://leetcode.cn/problems/two-sum/
 * Chapter: 哈希
 * Difficulty: Easy
 *
 * Idea:
 * - 
 *
 * Complexity:
 * - Time:
 * - Space:
 *
 * Pitfalls:
 * - 
 *
 * Review:
 * - First pass:
 * - Status: TODO / HINT / DONE / REVIEW / STAR
 */

#include <algorithm>
#include <cassert>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

#ifdef LOCAL
#include "common/leetcode.hpp"
#endif


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {2, 7, 11, 15};
        int target = 9;
        auto result = solution.twoSum(nums, target);
        auto expected = vector<int>{0, 1};
        sort(result.begin(), result.end());
        sort(expected.begin(), expected.end());
        assert((result == expected));
    }

    {
        vector<int> nums = {3, 2, 4};
        int target = 6;
        auto result = solution.twoSum(nums, target);
        auto expected = vector<int>{1, 2};
        sort(result.begin(), result.end());
        sort(expected.begin(), expected.end());
        assert((result == expected));
    }

    {
        vector<int> nums = {3, 3};
        int target = 6;
        auto result = solution.twoSum(nums, target);
        auto expected = vector<int>{0, 1};
        sort(result.begin(), result.end());
        sort(expected.begin(), expected.end());
        assert((result == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
