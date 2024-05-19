#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int year_count = 0;

    while (a<=b) {
        a *= 3;
        b *= 2;
        year_count++;
    }

    cout << year_count;
}