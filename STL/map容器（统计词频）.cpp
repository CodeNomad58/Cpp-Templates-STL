#include <iostream>
#include <map>
using namespace std;

int main() {
    string text = "apple banana apple orange banana";
    map<string, int> wordCount;
    
    // 手动分割单词（实际可用stringstream优化）
    string words[] = {"apple", "banana", "apple", "orange", "banana"};
    for (string word : words) {
        wordCount[word]++;
    }

    // 输出统计结果
    for (auto& pair : wordCount) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}
