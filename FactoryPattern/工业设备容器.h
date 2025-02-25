#include <iostream>
using namespace std;
template <typename T = string>
class IndustrialContainer {
private:
    T data;
public:
    IndustrialContainer(T d) : data(d) {}
    void display() {
        cout << "��ǰ�洢��" << data << endl;
    }
};

int main() {
    IndustrialContainer<int> ic1(100);  // �洢���ͣ����豸ID��
    IndustrialContainer<> ic2("�¶ȴ�����"); // ʹ��Ĭ��string����
    
    ic1.display();  // �������ǰ�洢��100
    ic2.display();  // �������ǰ�洢���¶ȴ�����
    return 0;
}
