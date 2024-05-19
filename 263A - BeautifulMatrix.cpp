#include <bits/stdc++.h>
using namespace std;

int main() {
    int matrix[5][5];
    int tmp, row, col;

    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin >> tmp;
            matrix[i][j] = tmp;
            
            if (tmp == 1) {
                row = i+1;
                col = j+1;
            }
        }
    }

    cout << abs(row-3) + abs(col-3);
}