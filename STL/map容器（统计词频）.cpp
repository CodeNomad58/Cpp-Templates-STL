#include <iostream>
#include <map>
using namespace std;

int main() {
    string text = "apple banana apple orange banana";
    map<string, int> wordCount;
    
    // �ֶ��ָ�ʣ�ʵ�ʿ���stringstream�Ż���
    string words[] = {"apple", "banana", "apple", "orange", "banana"};
    for (string word : words) {
        wordCount[word]++;
    }

    // ���ͳ�ƽ��
    for (auto& pair : wordCount) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}
