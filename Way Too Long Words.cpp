#include <iostream>
#include <string>
using namespace std;

string abbreviateWord(const string& word) {
    int length = word.length();
    if (length > 10) {
        return word[0] + to_string(length - 2) + word[length - 1];
    }
    return word;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Clear the newline character from the previous input

    for (int i = 0; i < n; ++i) {
        string word;
        getline(cin, word);

        cout << abbreviateWord(word) << endl;
    }

    return 0;
}
