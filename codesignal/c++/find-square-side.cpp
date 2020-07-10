// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/find-square-side.html .

int findSquareSide(std::vector<int> x, std::vector<int> y) {
    using namespace std;
    int res = 0, count = 0;
    for (int i = 0; i < x.size(); i++) {
        for (int j = i + 1; j < x.size(); j++) {
            int dx = x[i] - x[j], dy = y[i] - y[j];
            double dist = sqrt(dx * dx + dy * dy);
            int size = dist * dist;
            if (count == 0) {
                res = size;
                count++;
            } else {
                if (res == size) {
                    count++;
                } else {
                    count--;
                }
            }
        }
    }
    return res;
}
