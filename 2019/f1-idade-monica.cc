#include<iostream>
using namespace std;

int main() {
    int M, A, B;
    cin >> M >> A >> B;
    int C = M - (A + B);
    int resposta = max(A, max(B, C));
    cout << resposta << '\n';
    return 0;
}