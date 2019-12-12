// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/array-center.html .

std::vector<int> arrayCenter(std::vector<int> a) {
    using namespace std;
    int n = a.size();
    float mean = 0;
    int min = numeric_limits<int>::max();
    for (auto num: a) {
        mean += num;
        min = std::min(min, num);
    }
    mean /= n;
    vector<int> res;
    for (auto num: a) {
        if (abs(num - mean) < min) {
            res.push_back(num);
        }
    }
    return res;
}

