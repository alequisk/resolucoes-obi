#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    map<pair<int, int>, vector<int>> eventos;
    map<int, int> tempo_reposta;

    int T = 0;
    
    char O, last = -1; int X;
    for (int i = 0; i < N; i++) {
        cin >> O >> X;
        if (O == 'T') {
            T += X;
        }

        if (last != 'T' && O != 'T') {
            ++T;
        }

        if (O == 'R' || O == 'E') {
            pair<int,int> p = make_pair(X, O == 'R' ? 0 : 1);
            eventos[p].push_back(T);
        }

        last = O;
    }
    auto it = eventos.begin();
    while (it != eventos.end()) {
        auto p = it->first;
        if (p.second == 1) {
            ++it;
            continue;
        }
        pair<int,int> p2 = make_pair((it->first).first, 1);
        if ((it->second).size() != eventos[p2].size()) {
            cout << p.first << ' ' << -1 << '\n';
            ++it;
            continue;
        }
        int cost = 0;
        for (int i = 0; i < eventos[p2].size(); i++) {
            cost += eventos[p2][i] - (it->second)[i];
        }
        cout << p.first << ' ' << cost << '\n';
        ++it;
    }

    return 0;
}