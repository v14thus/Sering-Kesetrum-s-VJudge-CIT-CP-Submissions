// Vis's code

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int x;

    if (k == 0) {
        if (a[0] > 1) {
            x = 1;
        } else {
            x = -1;
        }
    } 

    else {
        if (k == n || a[k - 1] != a[k]) {
            x = a[k - 1];
        } else {
            x = -1;
        }
    }

    cout << x << endl;
}
