#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t;

        // Check if at least two of them are sure about the solution
        if (p + v + t >= 2) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
