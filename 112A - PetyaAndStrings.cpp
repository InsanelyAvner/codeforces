#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    transform(str1.begin(), str1.end(), str1.begin(),
              [](unsigned char c){ return tolower(c); });
    transform(str2.begin(), str2.end(), str2.begin(),
              [](unsigned char c){ return tolower(c); });
              
    if (str1 < str2) {
        cout << -1;
    } else if (str2 < str1) {
        cout << 1;
    } else {
        cout << 0;
    }
    
}