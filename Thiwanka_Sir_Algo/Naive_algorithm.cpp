#include<iostream>
using namespace std;

void search(string array, string pattern) {
    if (array.length() >= pattern.length()) {
        for (int i = 0; i <= array.length() - pattern.length(); i++) {
            bool found = true;
            for (int j = 0; j < pattern.length(); j++) {
                if (array[i + j] != pattern[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                cout << "Pattern found at index " << i << endl;
            }
        }
    } else {
        cout << "Array length is less than pattern length!" << endl;
    }
}

int main() {
    string array = "AABAfyuhjbAABAdrctygvhjAABA";
    string pattern = "AABA";

    search(array, pattern);

    return 0;
}
