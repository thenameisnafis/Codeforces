#include<iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int *scores = new int[n]; // Dynamic memory allocation

    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int advance_count = 0;
    int kth_score = scores[k - 1]; // Get the score of the k-th place finisher

    for (int i = 0; i < n; i++) {
        if (scores[i] >= kth_score && scores[i] > 0) {
            advance_count++;
        } else {
            break; // Since scores are non-increasing, no one below this position can advance
        }
    }

    cout << advance_count << endl;

    delete[] scores; // Release dynamically allocated memory
    
    return 0;
}
