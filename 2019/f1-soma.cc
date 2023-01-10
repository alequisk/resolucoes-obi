#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef int64_t ll;

int main() {
    int N;
    ll K;
    cin >> N >> K;
    
    vector<ll> prefix_sum(N+1, (ll) 0);
    for (int i = 1; i <= N; i++) {
        ll x; cin >> x;
        prefix_sum[i] = x + prefix_sum[i-1];
    }

    ll ans = 0;
    for (int i = 1; i <= N; i++) {
        auto low = lower_bound(prefix_sum.begin() + i, prefix_sum.end(), prefix_sum[i - 1] + K);
        auto high = upper_bound(prefix_sum.begin() + i, prefix_sum.end(), prefix_sum[i - 1] + K);
        ans += high - low;
    }

    cout << ans << '\n';

    return 0;
}