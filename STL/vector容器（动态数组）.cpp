#include <iostream>
#include <vector>
#include <algorithm> // 包含sort算法
using namespace std;

int main() {
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6};
    
    // 排序+去重（蓝桥杯常用技巧）
    sort(nums.begin(), nums.end());
    auto last = unique(nums.begin(), nums.end());
    nums.erase(last, nums.end());

    // 遍历输出（C++11范围for）
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
