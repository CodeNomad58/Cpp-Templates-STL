#include <iostream>
#include <string>
using namespace std;

// 抽象基类：工业设备
class IndustrialDevice {
public:
    virtual void displayInfo() = 0;  // 纯虚函数
};

// 具体类：传感器
class Sensor : public IndustrialDevice {
private:
    string type;
public:
    Sensor(string t) : type(t) {}
    void displayInfo() override {
        cout << "传感器类型：" << type << "，状态：工作中" << endl;
    }
};

// 具体类：机械臂
class RobotArm : public IndustrialDevice {
private:
    int power;
public:
    RobotArm(int p) : power(p) {}
    void displayInfo() override {
        cout << "机械臂功率：" << power << "W，状态：待命" << endl;
    }
};

// 设备工厂
class DeviceFactory {
public:
    IndustrialDevice* createDevice(string type) {
        if (type == "sensor") return new Sensor("温度传感器");
        else if (type == "robot") return new RobotArm(5000);
        else return NULL;
    }
};

int main() {
    DeviceFactory factory;
    IndustrialDevice* device1 = factory.createDevice("sensor");
    IndustrialDevice* device2 = factory.createDevice("robot");

    device1->displayInfo();  // 输出传感器信息
    device2->displayInfo();  // 输出机械臂信息

    delete device1;
    delete device2;
    return 0;
}
