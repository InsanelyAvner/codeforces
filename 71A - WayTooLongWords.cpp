// Way Too Long Words
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    // string words[n];

    for (int i=0; i<n; i++)
    {
        string word;
        cin >> word;

        // format word
        if (word.length() > 10) {
            int mid_length = word.length() - 2;
            char first_letter = word[0];
            char last_letter = word[word.length()-1];

            cout << first_letter << mid_length << last_letter << endl;
        } else {
            cout << word << endl;
        }
    }
}