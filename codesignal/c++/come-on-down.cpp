// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/come-on-down.html .

int comeOnDown(int maxPrice, std::vector<int> bids) {
    using namespace std;
    vector<int> nbids;
    for (auto bid : bids) {
        if (bid <= maxPrice) {
            nbids.push_back(bid);
        }
    }
    bids = nbids;
    sort(bids.begin(), bids.end());
    bids.insert(bids.begin(), 0);
    bids.push_back(maxPrice + 1);
    int res = 0, mwin = 0;
    for (int i = 0; i < bids.size() - 1; i++) {
        int a = bids[i] + 1;
        int b = bids[i + 1] - 1;
        if (b < a) {
            continue;
        }
        int win = b - a + 1;
        if (win > mwin) {
            res = a;
            mwin = win;
        }
    }
    return res;
}
