#include<iostream>
#include<vector>
#include<string>

using namespace std;

void search(const string& txt, const string& pattern) {
    int txtLength = txt.length();
    int patternLength = pattern.length();
    vector<int> occurrences;

    for (int i = 0; i <= txtLength - patternLength; i++) {
        int j;
        for (j = 0; j < patternLength; j++) {
            if (txt[i + j] != pattern[j])
                break;
        }
        if (j == patternLength)
            occurrences.push_back(i);
    }

    if (occurrences.empty()) {
        cout << "Pattern not found in text." << endl;
    } else {
        cout << "Pattern found at positions: ";
        for (int pos : occurrences)
            cout << pos << " ";
        cout << endl;
    }
}

int main() {
    string text = "AABAfyuhjbAABAdrctygvhjAABA";
    string pattern = "AABA";

    search(text, pattern);

    return 0;
}
