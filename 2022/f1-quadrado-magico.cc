#include<iostream>
#include<vector>

using namespace std;

int main() {

    int N, x, y, faltando = 0;
    cin >> N;
    vector<vector<int>> m(N, vector<int>(N, 0));

    int numeros = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> m[i][j];
            if (!m[i][j]) {
                x = i+1;
                y = j+1;
            }
            faltando ^= numeros;
            faltando ^= m[i][j];
            numeros++;
        }
    }

    cout << faltando << '\n' << x << '\n' << y << '\n';

    return 0;
}