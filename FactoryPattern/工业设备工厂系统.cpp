#include <iostream>
#include <string>
using namespace std;

// ������ࣺ��ҵ�豸
class IndustrialDevice {
public:
    virtual void displayInfo() = 0;  // ���麯��
};

// �����ࣺ������
class Sensor : public IndustrialDevice {
private:
    string type;
public:
    Sensor(string t) : type(t) {}
    void displayInfo() override {
        cout << "���������ͣ�" << type << "��״̬��������" << endl;
    }
};

// �����ࣺ��е��
class RobotArm : public IndustrialDevice {
private:
    int power;
public:
    RobotArm(int p) : power(p) {}
    void displayInfo() override {
        cout << "��е�۹��ʣ�" << power << "W��״̬������" << endl;
    }
};

// �豸����
class DeviceFactory {
public:
    IndustrialDevice* createDevice(string type) {
        if (type == "sensor") return new Sensor("�¶ȴ�����");
        else if (type == "robot") return new RobotArm(5000);
        else return NULL;
    }
};

int main() {
    DeviceFactory factory;
    IndustrialDevice* device1 = factory.createDevice("sensor");
    IndustrialDevice* device2 = factory.createDevice("robot");

    device1->displayInfo();  // �����������Ϣ
    device2->displayInfo();  // �����е����Ϣ

    delete device1;
    delete device2;
    return 0;
}
