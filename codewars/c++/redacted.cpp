// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/redacted.html .

bool redacted(const std::string &doc1, const std::string &doc2) {
    int n1 = doc1.size(), n2 = doc2.size();
    if (n1 != n2) {
        return false;
    }
    for (int i = 0; i < n1; i++) {
        if (doc2[i] == '\n') {
            if (doc1[i] != '\n') {
                return false;
            }
        } else {
            if (doc1[i] == doc2[i] || doc1[i] == 'X') {
            } else {
                return false;
            }
        }
    }
    return true;
}
