#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Device {
public:
    string name;
    int id;
    Device(string n, int i) : name(n), id(i) {}
};

int main() {
    vector<Device> devices;
    
    // 添加设备
    devices.push_back(Device("传感器", 1001));
    devices.emplace_back("机械臂", 2002); // 更高效的添加方式
    
    // 遍历设备（使用迭代器）
    cout << "=== 设备列表 ===" << endl;
    for (auto it = devices.begin(); it != devices.end(); ++it) {
        cout << "ID:" << it->id << " 名称:" << it->name << endl;
    }
    
    // 查找设备（Lambda表达式）
    int targetId = 2002;
    auto result = find_if(devices.begin(), devices.end(), 
        [targetId](const Device& d){ return d.id == targetId; });
    
    if (result != devices.end()) 
        cout << "找到设备：" << result->name << endl;
    else
        cout << "设备未找到" << endl;
        
    return 0;
}
