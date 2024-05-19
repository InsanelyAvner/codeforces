#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int totalCost = k * w * (w + 1) / 2;

    int amt = totalCost - n;

    if (amt <= 0) {
        cout << 0 << endl;
    } else {
        cout << amt << endl;
    }

    return 0;
}
