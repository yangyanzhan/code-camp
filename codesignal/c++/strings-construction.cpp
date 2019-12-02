// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/strings-construction.html .

int stringsConstruction(std::string A, std::string B) {
    using namespace std;
    int countsA[26] = {0}, countsB[26] = {0};
    for (int i = 0; i < A.length(); i++) {
        int idx = A[i] - 'a';
        if (0 <= idx && idx < 26) {
            countsA[idx]++;
        }
    }
    for (int i = 0; i < B.length(); i++) {
        int idx = B[i] - 'a';
        if (0 <= idx && idx < 26) {
            countsB[idx]++;
        }
    }
    int best = INT_MAX;
    for (int i = 0; i < 26; i++) {
        if (countsA[i] > 0) {
            int count = countsB[i] / countsA[i];
            best = min(best, count);
        }
    }
    return best;
}

