#include <iostream>
#include <vector>
#include <algorithm> // ����sort�㷨
using namespace std;

int main() {
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6};
    
    // ����+ȥ�أ����ű����ü��ɣ�
    sort(nums.begin(), nums.end());
    auto last = unique(nums.begin(), nums.end());
    nums.erase(last, nums.end());

    // ���������C++11��Χfor��
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
