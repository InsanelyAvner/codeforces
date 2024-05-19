#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;

    vector<int> numbers;
    stringstream ss(input);
    char plus;

    int num;
    while (ss >> num) {
        numbers.push_back(num);
        ss >> plus;
    }

    sort(numbers.begin(), numbers.end());

    for (size_t i = 0; i < numbers.size(); ++i) {
        if (i > 0) cout << '+';
        cout << numbers[i];
    }

    return 0;
}