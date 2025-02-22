#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 3, 9, 1, 7};
    
    // 找最大值
    auto maxIt = max_element(v.begin(), v.end());
    cout << "最大值: " << *maxIt << endl;

    // 查找特定元素
    auto found = find(v.begin(), v.end(), 3);
    if (found != v.end()) {
        cout << "找到3，位置：" << found - v.begin() << endl;
    }
    return 0;
}
