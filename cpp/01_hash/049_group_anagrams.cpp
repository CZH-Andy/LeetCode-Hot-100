/*
 * Problem: 49. 字母异位词分组 / Group Anagrams
 * Link: https://leetcode.cn/problems/group-anagrams/
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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
        assert((sortedInnerAndOuter(solution.groupAnagrams(strs)) == sortedInnerAndOuter(vector<vector<string>>{{"bat"}, {"nat", "tan"}, {"ate", "eat", "tea"}})));
    }

    {
        vector<string> strs = {""};
        assert((sortedInnerAndOuter(solution.groupAnagrams(strs)) == sortedInnerAndOuter(vector<vector<string>>{{""}})));
    }

    {
        vector<string> strs = {"a"};
        assert((sortedInnerAndOuter(solution.groupAnagrams(strs)) == sortedInnerAndOuter(vector<vector<string>>{{"a"}})));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
