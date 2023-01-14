#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main() {
    int N, M, S;
    cin >> N >> M >> S;
    
    for (int i = M; i >= N; i--) {
        string t = to_string(i);
        int s = 0;
        for (char c: t) s += c - '0';

        if (s == S) {
            cout << i << '\n'; return 0;
        }
    }

    cout << -1  << '\n';

    return 0;
}