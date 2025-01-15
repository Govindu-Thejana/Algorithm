#include <iostream>
#include <string>
#include <algorithm>

void printSubstrings(std::string str) {
    int n = str.length();
    for (int len = 1; len <= n; len++) {
        for (int start = 0; start <= n - len; start++) {
            std::string sub_str = str.substr(start, len);
            std::cout << sub_str << "\n";
        }
    }
}

int main() {
    std::string str = "abcd";
    printSubstrings(str);
    return 0;
}