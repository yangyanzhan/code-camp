// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/largest-distance.html .

int largestDistance(std::vector<int> a) {
    using namespace std;
    int n = a.size() / 2;
    int res = numeric_limits<int>::min();
    for (int i = 0; i < n; i++) {
        int x1 = a[2 * i];
        int y1 = a[2 * i + 1];
        for (int j = i + 1; j < n; j++) {
            int x2 = a[2 * j];
            int y2 = a[2 * j + 1];
            int dist = max(abs(x1 - x2), abs(y1 - y2));
            res = max(res, dist);
        }
    }
    return res;
}

