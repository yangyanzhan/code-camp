// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/apple-and-orange.html .

int count(int s, int t, int a, vector<int> &offsets) {
    int res = 0;
    for (auto offset: offsets) {
        int p = a + offset;
        if (s <= p && p <= t) {
            res++;
        }
    }
    return res;
}

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    cout << count(s, t, a, apples) << endl;
    cout << count(s, t, b, oranges) << endl;
}
