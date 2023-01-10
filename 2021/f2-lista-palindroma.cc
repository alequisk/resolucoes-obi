#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x: a) cin >> x;
    
    int l = 0, r = n - 1, cnt = 0;
    
    while (l < r) {
        if (a[l] == a[r]) {
            l++; r--;
        } else {
            bool flag = false;
            while (!flag) {
                while (a[l] < a[r]) {
                    a[l+ 1] += a[l];
                    l++; cnt++;
                }
                while (a[l] > a[r]) {
                    a[r - 1] += a[r];
                    r--; cnt++;
                }
                flag = a[l] == a[r];
            }
        }
    }

    cout << cnt << '\n';
    return 0;
}