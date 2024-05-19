#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_set<char> s;
    string name;

    cin >> name;
 
    for (int i=0; i<name.size(); i++) {
        s.insert(name[i]);
    }

    if (s.size()%2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}