#include <iostream>
#include <vector>
using namespace std;

vector<int> solve(int a, int b, long k, int m) {
    cout << "start" << endl;
    unsigned long long c, d;
    if (k == 0) {
        c = 1;
        d = 0;
    } else if (k == 1) {
        c = a;
        d = b;
    } else {
        auto res1 = solve(a, b, k / 2, m);
        auto res2 = solve(a, b, k % 2, m);
        unsigned long long c1 = res1[0], d1 = res1[1], c2 = res2[0], d2 = res2[1];
        unsigned long long c3 = c1 * c1 - d1 * d1, d3 = c1 * d1 + d1 * c1;
        cout << c1 << " " << d1 << " " << c2 << " " << d2 << " " << c3 << " " << d3 << endl;
        c3 %= m;
        d3 %= m;
        cout << c1 << " " << d1 << " " << c2 << " " << d2 << " " << c3 << " " << d3 << endl;
        c = c3 * c2 - d3 * d2, d = c3 * d2 + d3 * c2;
    }
    c %= m;
    d %= m;
    cout << a << " " << b << " " << k << " : " << c << " " << d << endl;
    vector<int> res({(int)c, (int)d});
    cout << "end" << endl;
    return res;
}

int main() {
    solve(0, 1, 5, 10);
}
