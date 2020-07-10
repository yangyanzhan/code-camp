// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/longest-common-prefix.html .

string Solution::longestCommonPrefix(vector<string> &A) {
    string shortest = A[0];
    for (string word : A) {
        if (word.length() < shortest.length()) {
            shortest = word;
        }
    }
    string res;
    int begin = 0, end = shortest.length() - 1;
    while (begin <= end) {
        int middle = (begin + end) / 2;
        string part = shortest.substr(begin, middle - begin + 1);
        bool common = true;
        for (string item : A) {
            if (part != item.substr(begin, middle - begin + 1)) {
                common = false;
                break;
            }
        }
        if (common) {
            res += part;
            begin = middle + 1;
        } else {
            end = middle - 1;
        }
    }
    return res;
}
