#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;

    // convert to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    // erase vowels
    string vowels = "aoyeui";
    str.erase(remove_if(str.begin(), str.end(), [&](char c) {
        return vowels.find(c) != string::npos;
    }), str.end());
    
    // add dot before each consonant
    string result;
    for (char c : str) {
        result += '.';
        result += c;
    }

    cout << result;
}