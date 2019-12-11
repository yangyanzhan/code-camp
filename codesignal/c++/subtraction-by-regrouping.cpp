// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/subtraction-by-regrouping.html .

std::vector<int> subtractionByRegrouping(int minuend, int subtrahend) {
    using namespace std;
    vector<int> res;
    while (minuend > 0) {
        int d1 = minuend % 10;
        minuend /= 10;
        int d2 = subtrahend % 10;
        subtrahend /= 10;
        if (d1 >= d2) {
            res.push_back(d1);
        } else {
            minuend--;
            res.push_back(d1 + 10);
        }
    }
    return res;
}

