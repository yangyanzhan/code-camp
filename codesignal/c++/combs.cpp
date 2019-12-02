// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/combs.html .

int combs(std::string comb1, std::string comb2) {
    using namespace std;
    int best = comb1.size() + comb2.size();
    for (int end = 0; end < comb1.size() + comb2.size(); end++) {
        bool valid = true;
        for (int i = comb2.size() - 1; i >= 0; i--) {
            char ch2 = comb2[i];
            int j = end - (comb2.size() - 1 - i);
            if (0 <= j && j < comb1.size()) {
                char ch1 = comb1[j];
                if (ch1 == '*' && ch2 == '*') {
                    valid = false;
                    break;
                }
            }
        }
        if (valid) {
            int head = max((int)comb2.size() - 1 - end, 0);
            int tail = max(end - (int)comb1.size() + 1, 0);
            int len = head + comb1.size() + tail;
            best = min(best, len);
        }
    }
    return best;
}

