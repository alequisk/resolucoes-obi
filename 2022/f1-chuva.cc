#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
using ll = long long int;

int main() {

    int N;
    ll K;
    cin >> N >> K;
    vector<ll> arr(N+1, ll(0));

    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    ll ans = 0;
    for (int i = 1; i <= N; i++) {
        auto rg = equal_range(arr.begin() + i, arr.end(), arr[i-1] + K);
        ans += rg.second - rg.first;
    }

    cout << ans << '\n';

    return 0;
}