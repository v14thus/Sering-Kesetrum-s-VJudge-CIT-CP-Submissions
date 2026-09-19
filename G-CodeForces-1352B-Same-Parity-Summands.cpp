#include <iostream>
#include <vector>

using namespace std;

vector<int> solve(int n, int k) {
    for (int p : {1, 2}) {
        int rest = n - p * k;
        if (rest >= 0 && rest % 2 == 0) {
            int extra = rest / 2;
            vector<int> answer(k, p + 2 * (extra / k));

            vector<int> order;
            int left = 0;
            int right = k - 1;
            while (left <= right) {
                order.push_back(left);
                if (left != right) {
                    order.push_back(right);
                }
                ++left;
                --right;
            }

            for (int i = 0; i < extra % k; ++i) {
                answer[order[i]] += 2;
            }

            return answer;
        }
    }

    return {};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> answer = solve(n, k);
        if (!answer.empty()) {
            cout << "YES\n";
            for (int i = 0; i < k; ++i) {
                if (i > 0) {
                    cout << ' ';
                }
                cout << answer[i];
            }
            cout << '\n';
        } else {
            cout << "NO" << endl;
        }
    }
}
