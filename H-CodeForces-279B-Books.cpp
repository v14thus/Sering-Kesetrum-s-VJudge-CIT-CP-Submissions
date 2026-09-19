// Via's code

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long t;
    if (!(cin >> n >> t)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int left = 0;
    long long current_time = 0;
    int max_books = 0;

    for (int right = 0; right < n; right++) {
        current_time += a[right]; 

        while (current_time > t) {
            current_time -= a[left];
            left++;
        }

        max_books = max(max_books, right - left + 1);
    }

    cout << max_books << endl;
}
