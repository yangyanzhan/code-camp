// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/array-previous-less.html .

std::vector<int> arrayPreviousLess(std::vector<int> items) {
    using namespace std;
    vector<int> res;
    for (int i = 0; i < items.size(); i++) {
        bool found = false;
        for (int j = i - 1; j >= 0; j--) {
            if (items[j] < items[i]) {
                found = true;
                res.push_back(items[j]);
                break;
            }
        }
        if (!found) {
            res.push_back(-1);
        }
    }
    return res;
}

