#include<iostream>
using namespace std;

int toNumber(char c) {
    if (c < 'd') return 2;
    if (c < 'g') return 3;
    if (c < 'j') return 4;
    if (c < 'm') return 5;
    if (c < 'p') return 6;
    if (c < 't') return 7;
    if (c < 'w') return 8;
    return 9;
}

int main() {
    string s;
    int M, N;

    cin >> s;
    cin >> M;
    
    N = s.size();

    for (int i = 0; i < N; i++) {
        s[i] = (s[i]-'0'); 
    }

    int ans = 0;
    for (int i = 0; i < M; i++) {
        string w; cin >> w;
        if (w.size() != s.size()) continue;

        for (int j = 0; j < N; j++) {
            w[j] = toNumber(w[j]);
        }    
        ans += s == w;
    }

    cout << ans << '\n';

    return 0;
}