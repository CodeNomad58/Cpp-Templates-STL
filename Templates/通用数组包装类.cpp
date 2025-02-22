#include <iostream>
using namespace std;
 
template <class T, int size>//定义一个类模板
class MyArray {
private:
    T arr[size];
public:
    void set(int index, T value) {
        arr[index] = value;
    }
    T get(int index) {
        return arr[index];
    }
};
 
int main() {
    MyArray<int, 5> intArr;
    intArr.set(0, 100);
    cout << "intArr[0] = " << intArr.get(0) << endl;
 
    MyArray<string, 3> strArr;
    strArr.set(1, "Hello STL");
    cout << "strArr[1] = " << strArr.get(1) << endl;
    return 0;
}
