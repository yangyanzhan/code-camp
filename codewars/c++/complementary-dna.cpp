// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/complementary-dna.html .

#include <string>
#include <vector>

std::string DNAStrand(const std::string &dna) {
    using namespace std;
    string res = dna;
    vector<string> cache{"ATGC", "TACG"};
    for (auto &ch : res) {
        int idx = cache[0].find(ch);
        ch = cache[1][idx];
    }
    return res;
}
