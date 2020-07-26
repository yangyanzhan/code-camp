// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/cigar-strings-easy.html .

#include <string>

using namespace std;

std::string is_valid(std::string &cigar, std::string &nuc_seq) {
    int m = 0, s = 0;
    int pre = -1;
    for (int i = 0; i < cigar.size(); i++) {
        if (isdigit(cigar[i])) {
            if (pre == -1) {
                pre = i;
            }
        }
        if (pre != -1) {
            if (!isdigit(cigar[i])) {
                int num = stoi(cigar.substr(pre, i - pre));
                if (cigar[i] == 'M') {
                    m += num;
                } else {
                    s += num;
                }
                pre = -1;
            }
        }
    }
    if (m + s != nuc_seq.size()) {
        return "Invalid cigar";
    }
    if (m == nuc_seq.size()) {
        return "True";
    }
    return "False";
}
