#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> arr(N);
    
    for (auto& x: arr) {
        cin >> x;
    }
    int64_t cost = 0;
    int pos = 0;
    for (int i = 0; i < M; i++) {
        int w; cin >> w;
        int pp = lower_bound(arr.begin(), arr.end(), w) - arr.begin();
        cost += abs(pp - pos);
        pos = pp;
    }
    
    cout << cost << '\n';

    return 0;
}