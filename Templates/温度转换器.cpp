#include <iostream>
using namespace std;
 
// ģ�庯��������ת����
template <typename T>//����һ������ģ�壬���߱���������T��Ҫ����T��ͨ�õ���������
T celsiusToFahrenheit(T celsius) {
    return celsius * 9 / 5 + 32;
}
 
int main() {
    cout << "����ת��: " << celsiusToFahrenheit(30) << "��F" << endl;
    cout << "����ת��: " << celsiusToFahrenheit(30.5) << "��F" << endl;
    return 0;
}
