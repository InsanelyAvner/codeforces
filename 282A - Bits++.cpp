#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x = 0;
    string operation;

    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> operation;
        if (operation.find("--") != string::npos) {
            x--;
        } else {
            x++;
        }
    }

    cout << x;
}