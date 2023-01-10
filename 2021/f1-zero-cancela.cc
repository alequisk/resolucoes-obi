#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N; cin >> N;
    vector<int> values;

    for (int i = 0; i < N; i++) {
        int x; cin >> x;
        if (x == 0) {
            values.pop_back();
        } else {
            values.push_back(x);
        }
    }
    int64_t ans = 0;
    for (int x: values) ans += x;

    cout << ans << '\n';

    return 0;
}