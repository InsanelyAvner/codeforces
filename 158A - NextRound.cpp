#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, v;
    cin >> n >> k;

    int count = 0;
    int scores[n];

    for (int i=0; i<n; i++) {
        cin >> v;
        scores[i] = v;
    }

    for (int i=0; i<n; i++) {
        if (scores[i] >= scores[k-1] && scores[i] > 0) {
            count++;
        } else {
            break;
        }
    }

    cout << count;
}