#include<iostream>
using namespace std;

int baralho[13][4];

void resolve(string s) {
    int n = (int)s.size();
    for (int i = 0; i < n; i+=3) {
        int num = (s[i]-'0')*10 + (s[i+1]-'0');
        int naipe = 3;
        if (s[i+2]=='C') naipe = 0;
        if (s[i+2]=='E') naipe = 1;
        if (s[i+2]=='U') naipe = 2;
        baralho[--num][naipe]++;
    }
}

int main() {
    string s;
    cin >> s;

    resolve(s);

    for (int i = 0; i < 4; i++) {
        bool dup = false; int miss = 0;
        for (int j = 0; j < 13; ++j) {
            if (baralho[j][i] == 2) dup = true;
            if (baralho[j][i] == 0) miss++;
        }

        if (dup) {
            cout << "erro\n";
        } else {
            cout << miss << '\n';
        }
    }
    
    return 0;
}