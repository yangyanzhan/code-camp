// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/numbers-with-d-occurences-of-digit-d.html .

using namespace std;

bool is_dd(int n) {
    vector<int> cnts(11, 0);
    while (n > 0) {
        cnts[n % 10]++;
        n /= 10;
    }
    for (int i = 1; i <= 10; i++) {
        if (cnts[i] == i) {
            return true;
        }
    }
    return false;
}
