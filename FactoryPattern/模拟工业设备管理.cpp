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
    
    // ����豸
    devices.push_back(Device("������", 1001));
    devices.emplace_back("��е��", 2002); // ����Ч����ӷ�ʽ
    
    // �����豸��ʹ�õ�������
    cout << "=== �豸�б� ===" << endl;
    for (auto it = devices.begin(); it != devices.end(); ++it) {
        cout << "ID:" << it->id << " ����:" << it->name << endl;
    }
    
    // �����豸��Lambda���ʽ��
    int targetId = 2002;
    auto result = find_if(devices.begin(), devices.end(), 
        [targetId](const Device& d){ return d.id == targetId; });
    
    if (result != devices.end()) 
        cout << "�ҵ��豸��" << result->name << endl;
    else
        cout << "�豸δ�ҵ�" << endl;
        
    return 0;
}
