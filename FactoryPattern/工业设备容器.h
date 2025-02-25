#include <iostream>
using namespace std;
template <typename T = string>
class IndustrialContainer {
private:
    T data;
public:
    IndustrialContainer(T d) : data(d) {}
    void display() {
        cout << "当前存储：" << data << endl;
    }
};

int main() {
    IndustrialContainer<int> ic1(100);  // 存储整型（如设备ID）
    IndustrialContainer<> ic2("温度传感器"); // 使用默认string类型
    
    ic1.display();  // 输出：当前存储：100
    ic2.display();  // 输出：当前存储：温度传感器
    return 0;
}
