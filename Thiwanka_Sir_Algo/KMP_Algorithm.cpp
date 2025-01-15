#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


//can you give me the KMP algorithm example? 


#include <iostream>
#include <string>
#include <vector>

void computeLPSArray(string pattern, vector<int>& lps) {
    int M = pattern.length();
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < M) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len!= 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KMP(string text, string pattern) {
    int M = pattern.length();
    int N = text.length();

    vector<int> lps(M, 0);
    computeLPSArray(pattern, lps);

    int i = 0;
    int j = 0;
    while (i < N) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }
        if (j == M) {
            cout << "Pattern found at index " << i - j << endl;
            j = lps[j - 1];
        } else if (i < N && pattern[j]!= text[i]) {
            if (j!= 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
}

int main() {
    string text = "ABABDABACDABABCABAB";
    string pattern = "ABABCABAB";
    KMP(text, pattern);
    return 0;
}