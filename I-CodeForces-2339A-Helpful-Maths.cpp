#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    string expression;
    cin >> expression;

    vector<char> numbers;
    for (char character : expression) {
        if (character != '+') {
            numbers.push_back(character);
        }
    }

    sort(numbers.begin(), numbers.end());

    for (size_t i = 0; i < numbers.size(); ++i) {
        if (i > 0) {
            cout << '+';
        }
        cout << numbers[i];
    }
    cout << '\n';
}
