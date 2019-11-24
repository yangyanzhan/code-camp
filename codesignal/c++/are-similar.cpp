// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/are-similar.html .

bool areSimilar(std::vector<int> a, std::vector<int> b) {
    using namespace std;
    int count = 0, a1, a2, b1, b2;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) {
            continue;
        }
        count++;
        if (count >= 3) {
            return false;
        }
        if (count == 1) {
            a1 = a[i];
            b1 = b[i];
        }
        if (count == 2) {
            a2 = a[i];
            b2 = b[i];
        }
    }
    return count == 0 || (count == 2 && a1 == b2 && a2 == b1);
}
