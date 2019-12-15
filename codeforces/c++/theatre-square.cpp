// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codeforces/theatre-square.html .

#include <iostream>
 
using namespace std;
 
int main() {
    unsigned long long n, m, a;
    cin >> n >> m >> a;
    unsigned long long n1 = n / a + (n % a == 0 ? 0 : 1);
    unsigned long long m1 = m / a + (m % a == 0 ? 0 : 1);
    cout << (n1 * m1) << endl;
    return 0;
}

