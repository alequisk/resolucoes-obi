#include<iostream>

int main() {
    
    int cur, last = -1;
    bool asc = true, desc = true;
    for (int i = 0; i < 5; i++) {
        std::cin >> cur;
        if (last != -1) {
            asc = asc && cur > last;
            desc = desc && cur < last;
        }
        last = cur;
    }

    char ans = 'N';
    if (asc) ans = 'C';
    if (desc) ans = 'D';

    std::cout << ans << '\n';

    return 0;
}