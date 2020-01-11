// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/jumping-jimmy.html .

int jumpingJimmy(std::vector<int> tower, int jumpHeight) {
    using namespace std;
    int h = 0, th = 0, i = -1, n = tower.size();
    while (true) {
        if (i >= n) {
            break;
        }
        int h1 = h + jumpHeight;
        int i1 = i + 1;
        for (; i1 < n; i1++) {
            if (h1 < th + tower[i1]) {
                break;
            }
            th += tower[i1];
        }
        i1--;
        if (i == i1) {
            break;
        }
        h = th;
        i = i1;
    }
    return h;
}

