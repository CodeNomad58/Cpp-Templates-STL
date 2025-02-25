#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
// ��ԭ�й����������ģ�巽��
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

// ʹ��ʾ��
int main() {
    DeviceFactory<IndustrialDevice> factory;
    factory.addDevice(new Sensor("ѹ��������"));
    factory.addDevice(new RobotArm(8000));
    
    factory.showAllDevices();
    return 0;
}
