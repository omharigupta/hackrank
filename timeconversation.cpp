#include <iostream>
#include <string>
using namespace std;

int main() {
    string p;
    cin >> p;
    int k, l = 0, store;
    int integr = p[8];
    
    if (integr == 65) {  // 'A' is 65 in ASCII
        int n = p[0] - 48;
        k = p[1] - 48;
        if (n == 1 && k == 2) {
            p[0] = '0';
            p[1] = '0';
        }
    } else if (integr == 80) {  // 'P' is 80 in ASCII
        int n = p[0] - 48;
        k = p[1] - 48;
        l = ((n * 10) + (k * 1));
        if (l < 12) {
            store = l + 12;
            p[0] = (store / 10) % 10 + 48;
            p[1] = (store / 1) % 10 + 48;
        }
    }
p.erase(8,9);
    cout << p;
    return 0;
}
