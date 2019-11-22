// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/sort-by-height.html .

std::vector<int> sortByHeight(std::vector<int> a) {
    std::vector<int> b(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    b.erase(std::remove(b.begin(), b.end(), -1), b.end());
    int idx = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != -1) {
            a[i] = b[idx++];
        }
    }
    return a;
}
