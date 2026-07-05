/*
 * Problem: 128. 最长连续序列 / Longest Consecutive Sequence
 * Link: https://leetcode.cn/problems/longest-consecutive-sequence/
 * Chapter: 哈希
 * Difficulty: Medium
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
    int longestConsecutive(vector<int>& nums) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {100, 4, 200, 1, 3, 2};
        assert((solution.longestConsecutive(nums) == 4));
    }

    {
        vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
        assert((solution.longestConsecutive(nums) == 9));
    }

    {
        vector<int> nums = {1, 0, 1, 2};
        assert((solution.longestConsecutive(nums) == 3));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
