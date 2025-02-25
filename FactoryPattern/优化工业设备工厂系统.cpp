#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
// 在原有工厂类中添加模板方法
template <typename T>
class DeviceFactory {
private:
    vector<T*> devices;
public:
    void addDevice(T* dev) {
        devices.push_back(dev);
    }
    
    void showAllDevices() {
        for_each(devices.begin(), devices.end(), 
            [](T* dev){ dev->displayInfo(); });
    }
};

// 使用示例
int main() {
    DeviceFactory<IndustrialDevice> factory;
    factory.addDevice(new Sensor("压力传感器"));
    factory.addDevice(new RobotArm(8000));
    
    factory.showAllDevices();
    return 0;
}
