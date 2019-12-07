// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/crossword-formation.html .

int count(const std::vector<std::string> &words) {
    using namespace std;
    string w1 = words[0], w2 = words[1], w3 = words[2], w4 = words[3];
    int res = 0;
    for (int i1 = 0; i1 < w1.size(); i1++) {
        char ch1 = w1[i1];
        int pos2 = 0;
        while ((pos2 = w2.find(ch1, pos2)) != string::npos) {
            for (int i2 = pos2 + 2; i2 < w2.size(); i2++) {
                char ch2 = w2[i2];
                int pos3 = 0;
                while ((pos3 = w3.find(ch2, pos3)) != string::npos) {
                    int gap = i2 - pos2;
                    for (int i = 2; i + i1 < w1.size() && i + pos3 < w3.size(); i++) {
                        char ch_a = w1[i + i1], ch_b = w3[i + pos3];
                        for (int j = 0; j + gap < w4.size(); j++) {
                            if (w4[j] == ch_a && w4[j + gap] == ch_b) {
                                res++;
                            }
                        }
                    }
                    pos3++;
                }
            }
            pos2++;
        }
    }
    return res;
}


int crosswordFormation(std::vector<std::string> words) {
    using namespace std;
    sort(words.begin(), words.end());
    int res = 0;
    do {
        res += count(words);
    } while (next_permutation(words.begin(), words.end()));
    return res;
}

