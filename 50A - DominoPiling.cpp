#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    cout << ((m*n) - ((m*n)%2))/2;
}