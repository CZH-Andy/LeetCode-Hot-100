# LeetCode Hot 100

Source: https://leetcode.cn/studyplan/top-100-liked/

This repository is organized for solving the LeetCode Hot 100 list in C++.

## How To Use

1. Pick a problem from the progress table.
2. Copy `templates/solution.cpp` into the matching `cpp/<chapter>/` directory.
3. Keep the LeetCode-compatible `class Solution` in the file.
4. Put local checks inside the `#ifdef LOCAL` block.
5. Run locally with:

```bash
make run FILE=cpp/01_hash/001_two_sum.cpp
```

When submitting to LeetCode, copy the `class Solution` part only. For linked-list
and tree problems, LeetCode already provides `ListNode` and `TreeNode`; this repo
provides local definitions in `common/leetcode.hpp` for local testing.

## Status Marks

| Mark | Meaning |
|---|---|
| TODO | Not started |
| HINT | Solved with hints |
| DONE | Solved independently |
| REVIEW | Needs another pass |
| STAR | Worth repeated review |

## Progress

| # | Title | CN Title | Chapter | Difficulty | Status | File |
|---:|---|---|---|---|---|---|
| 1 | Two Sum | 两数之和 | 哈希 | EASY | TODO | `cpp/01_hash/001_two_sum.cpp` |
| 49 | Group Anagrams | 字母异位词分组 | 哈希 | MEDIUM | TODO | `cpp/01_hash/049_group_anagrams.cpp` |
| 128 | Longest Consecutive Sequence | 最长连续序列 | 哈希 | MEDIUM | TODO | `cpp/01_hash/128_longest_consecutive_sequence.cpp` |
| 283 | Move Zeroes | 移动零 | 双指针 | EASY | TODO | `cpp/02_two_pointers/283_move_zeroes.cpp` |
| 11 | Container With Most Water | 盛最多水的容器 | 双指针 | MEDIUM | TODO | `cpp/02_two_pointers/011_container_with_most_water.cpp` |
| 15 | 3Sum | 三数之和 | 双指针 | MEDIUM | TODO | `cpp/02_two_pointers/015_3sum.cpp` |
| 42 | Trapping Rain Water | 接雨水 | 双指针 | HARD | TODO | `cpp/02_two_pointers/042_trapping_rain_water.cpp` |
| 3 | Longest Substring Without Repeating Characters | 无重复字符的最长子串 | 滑动窗口 | MEDIUM | TODO | `cpp/03_sliding_window/003_longest_substring_without_repeating_characters.cpp` |
| 438 | Find All Anagrams in a String | 找到字符串中所有字母异位词 | 滑动窗口 | MEDIUM | TODO | `cpp/03_sliding_window/438_find_all_anagrams_in_a_string.cpp` |
| 560 | Subarray Sum Equals K | 和为 K 的子数组 | 子串 | MEDIUM | TODO | `cpp/04_substring/560_subarray_sum_equals_k.cpp` |
| 239 | Sliding Window Maximum | 滑动窗口最大值 | 子串 | HARD | TODO | `cpp/04_substring/239_sliding_window_maximum.cpp` |
| 76 | Minimum Window Substring | 最小覆盖子串 | 子串 | HARD | TODO | `cpp/04_substring/076_minimum_window_substring.cpp` |
| 53 | Maximum Subarray | 最大子数组和 | 普通数组 | MEDIUM | TODO | `cpp/05_array/053_maximum_subarray.cpp` |
| 56 | Merge Intervals | 合并区间 | 普通数组 | MEDIUM | TODO | `cpp/05_array/056_merge_intervals.cpp` |
| 189 | Rotate Array | 轮转数组 | 普通数组 | MEDIUM | TODO | `cpp/05_array/189_rotate_array.cpp` |
| 238 | Product of Array Except Self | 除自身以外数组的乘积 | 普通数组 | MEDIUM | TODO | `cpp/05_array/238_product_of_array_except_self.cpp` |
| 41 | First Missing Positive | 缺失的第一个正数 | 普通数组 | HARD | TODO | `cpp/05_array/041_first_missing_positive.cpp` |
| 73 | Set Matrix Zeroes | 矩阵置零 | 矩阵 | MEDIUM | TODO | `cpp/06_matrix/073_set_matrix_zeroes.cpp` |
| 54 | Spiral Matrix | 螺旋矩阵 | 矩阵 | MEDIUM | TODO | `cpp/06_matrix/054_spiral_matrix.cpp` |
| 48 | Rotate Image | 旋转图像 | 矩阵 | MEDIUM | TODO | `cpp/06_matrix/048_rotate_image.cpp` |
| 240 | Search a 2D Matrix II | 搜索二维矩阵 II | 矩阵 | MEDIUM | TODO | `cpp/06_matrix/240_search_a_2d_matrix_ii.cpp` |
| 160 | Intersection of Two Linked Lists | 相交链表 | 链表 | EASY | TODO | `cpp/07_linked_list/160_intersection_of_two_linked_lists.cpp` |
| 206 | Reverse Linked List | 反转链表 | 链表 | EASY | TODO | `cpp/07_linked_list/206_reverse_linked_list.cpp` |
| 234 | Palindrome Linked List | 回文链表 | 链表 | EASY | TODO | `cpp/07_linked_list/234_palindrome_linked_list.cpp` |
| 141 | Linked List Cycle | 环形链表 | 链表 | EASY | TODO | `cpp/07_linked_list/141_linked_list_cycle.cpp` |
| 142 | Linked List Cycle II | 环形链表 II | 链表 | MEDIUM | TODO | `cpp/07_linked_list/142_linked_list_cycle_ii.cpp` |
| 21 | Merge Two Sorted Lists | 合并两个有序链表 | 链表 | EASY | TODO | `cpp/07_linked_list/021_merge_two_sorted_lists.cpp` |
| 2 | Add Two Numbers | 两数相加 | 链表 | MEDIUM | TODO | `cpp/07_linked_list/002_add_two_numbers.cpp` |
| 19 | Remove Nth Node From End of List | 删除链表的倒数第 N 个结点 | 链表 | MEDIUM | TODO | `cpp/07_linked_list/019_remove_nth_node_from_end_of_list.cpp` |
| 24 | Swap Nodes in Pairs | 两两交换链表中的节点 | 链表 | MEDIUM | TODO | `cpp/07_linked_list/024_swap_nodes_in_pairs.cpp` |
| 25 | Reverse Nodes in k-Group | K 个一组翻转链表 | 链表 | HARD | TODO | `cpp/07_linked_list/025_reverse_nodes_in_k_group.cpp` |
| 138 | Copy List with Random Pointer | 随机链表的复制 | 链表 | MEDIUM | TODO | `cpp/07_linked_list/138_copy_list_with_random_pointer.cpp` |
| 148 | Sort List | 排序链表 | 链表 | MEDIUM | TODO | `cpp/07_linked_list/148_sort_list.cpp` |
| 23 | Merge k Sorted Lists | 合并 K 个升序链表 | 链表 | HARD | TODO | `cpp/07_linked_list/023_merge_k_sorted_lists.cpp` |
| 146 | LRU Cache | LRU 缓存 | 链表 | MEDIUM | TODO | `cpp/07_linked_list/146_lru_cache.cpp` |
| 94 | Binary Tree Inorder Traversal | 二叉树的中序遍历 | 二叉树 | EASY | TODO | `cpp/08_binary_tree/094_binary_tree_inorder_traversal.cpp` |
| 104 | Maximum Depth of Binary Tree | 二叉树的最大深度 | 二叉树 | EASY | TODO | `cpp/08_binary_tree/104_maximum_depth_of_binary_tree.cpp` |
| 226 | Invert Binary Tree | 翻转二叉树 | 二叉树 | EASY | TODO | `cpp/08_binary_tree/226_invert_binary_tree.cpp` |
| 101 | Symmetric Tree | 对称二叉树 | 二叉树 | EASY | TODO | `cpp/08_binary_tree/101_symmetric_tree.cpp` |
| 543 | Diameter of Binary Tree | 二叉树的直径 | 二叉树 | EASY | TODO | `cpp/08_binary_tree/543_diameter_of_binary_tree.cpp` |
| 102 | Binary Tree Level Order Traversal | 二叉树的层序遍历 | 二叉树 | MEDIUM | TODO | `cpp/08_binary_tree/102_binary_tree_level_order_traversal.cpp` |
| 108 | Convert Sorted Array to Binary Search Tree | 将有序数组转换为二叉搜索树 | 二叉树 | EASY | TODO | `cpp/08_binary_tree/108_convert_sorted_array_to_binary_search_tree.cpp` |
| 98 | Validate Binary Search Tree | 验证二叉搜索树 | 二叉树 | MEDIUM | TODO | `cpp/08_binary_tree/098_validate_binary_search_tree.cpp` |
| 230 | Kth Smallest Element in a BST | 二叉搜索树中第 K 小的元素 | 二叉树 | MEDIUM | TODO | `cpp/08_binary_tree/230_kth_smallest_element_in_a_bst.cpp` |
| 199 | Binary Tree Right Side View | 二叉树的右视图 | 二叉树 | MEDIUM | TODO | `cpp/08_binary_tree/199_binary_tree_right_side_view.cpp` |
| 114 | Flatten Binary Tree to Linked List | 二叉树展开为链表 | 二叉树 | MEDIUM | TODO | `cpp/08_binary_tree/114_flatten_binary_tree_to_linked_list.cpp` |
| 105 | Construct Binary Tree from Preorder and Inorder Traversal | 从前序与中序遍历序列构造二叉树 | 二叉树 | MEDIUM | TODO | `cpp/08_binary_tree/105_construct_binary_tree_from_preorder_and_inorder_traversal.cpp` |
| 437 | Path Sum III | 路径总和 III | 二叉树 | MEDIUM | TODO | `cpp/08_binary_tree/437_path_sum_iii.cpp` |
| 236 | Lowest Common Ancestor of a Binary Tree | 二叉树的最近公共祖先 | 二叉树 | MEDIUM | TODO | `cpp/08_binary_tree/236_lowest_common_ancestor_of_a_binary_tree.cpp` |
| 124 | Binary Tree Maximum Path Sum | 二叉树中的最大路径和 | 二叉树 | HARD | TODO | `cpp/08_binary_tree/124_binary_tree_maximum_path_sum.cpp` |
| 200 | Number of Islands | 岛屿数量 | 图论 | MEDIUM | TODO | `cpp/09_graph/200_number_of_islands.cpp` |
| 994 | Rotting Oranges | 腐烂的橘子 | 图论 | MEDIUM | TODO | `cpp/09_graph/994_rotting_oranges.cpp` |
| 207 | Course Schedule | 课程表 | 图论 | MEDIUM | TODO | `cpp/09_graph/207_course_schedule.cpp` |
| 208 | Implement Trie (Prefix Tree) | 实现 Trie (前缀树) | 图论 | MEDIUM | TODO | `cpp/09_graph/208_implement_trie_prefix_tree.cpp` |
| 46 | Permutations | 全排列 | 回溯 | MEDIUM | TODO | `cpp/10_backtracking/046_permutations.cpp` |
| 78 | Subsets | 子集 | 回溯 | MEDIUM | TODO | `cpp/10_backtracking/078_subsets.cpp` |
| 17 | Letter Combinations of a Phone Number | 电话号码的字母组合 | 回溯 | MEDIUM | TODO | `cpp/10_backtracking/017_letter_combinations_of_a_phone_number.cpp` |
| 39 | Combination Sum | 组合总和 | 回溯 | MEDIUM | TODO | `cpp/10_backtracking/039_combination_sum.cpp` |
| 22 | Generate Parentheses | 括号生成 | 回溯 | MEDIUM | TODO | `cpp/10_backtracking/022_generate_parentheses.cpp` |
| 79 | Word Search | 单词搜索 | 回溯 | MEDIUM | TODO | `cpp/10_backtracking/079_word_search.cpp` |
| 131 | Palindrome Partitioning | 分割回文串 | 回溯 | MEDIUM | TODO | `cpp/10_backtracking/131_palindrome_partitioning.cpp` |
| 51 | N-Queens | N 皇后 | 回溯 | HARD | TODO | `cpp/10_backtracking/051_n_queens.cpp` |
| 35 | Search Insert Position | 搜索插入位置 | 二分查找 | EASY | TODO | `cpp/11_binary_search/035_search_insert_position.cpp` |
| 74 | Search a 2D Matrix | 搜索二维矩阵 | 二分查找 | MEDIUM | TODO | `cpp/11_binary_search/074_search_a_2d_matrix.cpp` |
| 34 | Find First and Last Position of Element in Sorted Array | 在排序数组中查找元素的第一个和最后一个位置 | 二分查找 | MEDIUM | TODO | `cpp/11_binary_search/034_find_first_and_last_position_of_element_in_sorted_array.cpp` |
| 33 | Search in Rotated Sorted Array | 搜索旋转排序数组 | 二分查找 | MEDIUM | TODO | `cpp/11_binary_search/033_search_in_rotated_sorted_array.cpp` |
| 153 | Find Minimum in Rotated Sorted Array | 寻找旋转排序数组中的最小值 | 二分查找 | MEDIUM | TODO | `cpp/11_binary_search/153_find_minimum_in_rotated_sorted_array.cpp` |
| 4 | Median of Two Sorted Arrays | 寻找两个正序数组的中位数 | 二分查找 | HARD | TODO | `cpp/11_binary_search/004_median_of_two_sorted_arrays.cpp` |
| 20 | Valid Parentheses | 有效的括号 | 栈 | EASY | TODO | `cpp/12_stack/020_valid_parentheses.cpp` |
| 155 | Min Stack | 最小栈 | 栈 | MEDIUM | TODO | `cpp/12_stack/155_min_stack.cpp` |
| 394 | Decode String | 字符串解码 | 栈 | MEDIUM | TODO | `cpp/12_stack/394_decode_string.cpp` |
| 739 | Daily Temperatures | 每日温度 | 栈 | MEDIUM | TODO | `cpp/12_stack/739_daily_temperatures.cpp` |
| 84 | Largest Rectangle in Histogram | 柱状图中最大的矩形 | 栈 | HARD | TODO | `cpp/12_stack/084_largest_rectangle_in_histogram.cpp` |
| 215 | Kth Largest Element in an Array | 数组中的第K个最大元素 | 堆 | MEDIUM | TODO | `cpp/13_heap/215_kth_largest_element_in_an_array.cpp` |
| 347 | Top K Frequent Elements | 前 K 个高频元素 | 堆 | MEDIUM | TODO | `cpp/13_heap/347_top_k_frequent_elements.cpp` |
| 295 | Find Median from Data Stream | 数据流的中位数 | 堆 | HARD | TODO | `cpp/13_heap/295_find_median_from_data_stream.cpp` |
| 121 | Best Time to Buy and Sell Stock | 买卖股票的最佳时机 | 贪心算法 | EASY | TODO | `cpp/14_greedy/121_best_time_to_buy_and_sell_stock.cpp` |
| 55 | Jump Game | 跳跃游戏 | 贪心算法 | MEDIUM | TODO | `cpp/14_greedy/055_jump_game.cpp` |
| 45 | Jump Game II | 跳跃游戏 II | 贪心算法 | MEDIUM | TODO | `cpp/14_greedy/045_jump_game_ii.cpp` |
| 763 | Partition Labels | 划分字母区间 | 贪心算法 | MEDIUM | TODO | `cpp/14_greedy/763_partition_labels.cpp` |
| 70 | Climbing Stairs | 爬楼梯 | 动态规划 | EASY | TODO | `cpp/15_dp/070_climbing_stairs.cpp` |
| 118 | Pascal's Triangle | 杨辉三角 | 动态规划 | EASY | TODO | `cpp/15_dp/118_pascals_triangle.cpp` |
| 198 | House Robber | 打家劫舍 | 动态规划 | MEDIUM | TODO | `cpp/15_dp/198_house_robber.cpp` |
| 279 | Perfect Squares | 完全平方数 | 动态规划 | MEDIUM | TODO | `cpp/15_dp/279_perfect_squares.cpp` |
| 322 | Coin Change | 零钱兑换 | 动态规划 | MEDIUM | TODO | `cpp/15_dp/322_coin_change.cpp` |
| 139 | Word Break | 单词拆分 | 动态规划 | MEDIUM | TODO | `cpp/15_dp/139_word_break.cpp` |
| 300 | Longest Increasing Subsequence | 最长递增子序列 | 动态规划 | MEDIUM | TODO | `cpp/15_dp/300_longest_increasing_subsequence.cpp` |
| 152 | Maximum Product Subarray | 乘积最大子数组 | 动态规划 | MEDIUM | TODO | `cpp/15_dp/152_maximum_product_subarray.cpp` |
| 416 | Partition Equal Subset Sum | 分割等和子集 | 动态规划 | MEDIUM | TODO | `cpp/15_dp/416_partition_equal_subset_sum.cpp` |
| 32 | Longest Valid Parentheses | 最长有效括号 | 动态规划 | HARD | TODO | `cpp/15_dp/032_longest_valid_parentheses.cpp` |
| 62 | Unique Paths | 不同路径 | 多维动态规划 | MEDIUM | TODO | `cpp/16_multidimensional_dp/062_unique_paths.cpp` |
| 64 | Minimum Path Sum | 最小路径和 | 多维动态规划 | MEDIUM | TODO | `cpp/16_multidimensional_dp/064_minimum_path_sum.cpp` |
| 5 | Longest Palindromic Substring | 最长回文子串 | 多维动态规划 | MEDIUM | TODO | `cpp/16_multidimensional_dp/005_longest_palindromic_substring.cpp` |
| 1143 | Longest Common Subsequence | 最长公共子序列 | 多维动态规划 | MEDIUM | TODO | `cpp/16_multidimensional_dp/1143_longest_common_subsequence.cpp` |
| 72 | Edit Distance | 编辑距离 | 多维动态规划 | MEDIUM | TODO | `cpp/16_multidimensional_dp/072_edit_distance.cpp` |
| 136 | Single Number | 只出现一次的数字 | 技巧 | EASY | TODO | `cpp/17_tricks/136_single_number.cpp` |
| 169 | Majority Element | 多数元素 | 技巧 | EASY | TODO | `cpp/17_tricks/169_majority_element.cpp` |
| 75 | Sort Colors | 颜色分类 | 技巧 | MEDIUM | TODO | `cpp/17_tricks/075_sort_colors.cpp` |
| 31 | Next Permutation | 下一个排列 | 技巧 | MEDIUM | TODO | `cpp/17_tricks/031_next_permutation.cpp` |
| 287 | Find the Duplicate Number | 寻找重复数 | 技巧 | MEDIUM | TODO | `cpp/17_tricks/287_find_the_duplicate_number.cpp` |

