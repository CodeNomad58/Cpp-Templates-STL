#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 3, 9, 1, 7};
    
    // �����ֵ
    auto maxIt = max_element(v.begin(), v.end());
    cout << "���ֵ: " << *maxIt << endl;

    // �����ض�Ԫ��
    auto found = find(v.begin(), v.end(), 3);
    if (found != v.end()) {
        cout << "�ҵ�3��λ�ã�" << found - v.begin() << endl;
    }
    return 0;
}
