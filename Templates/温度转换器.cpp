#include <iostream>
using namespace std;
 
// 模板函数：摄氏转华氏
template <typename T>//声明一个函数模板，告诉编译器后面T不要报错，T是通用的数据类型
T celsiusToFahrenheit(T celsius) {
    return celsius * 9 / 5 + 32;
}
 
int main() {
    cout << "整型转换: " << celsiusToFahrenheit(30) << "°F" << endl;
    cout << "浮点转换: " << celsiusToFahrenheit(30.5) << "°F" << endl;
    return 0;
}
