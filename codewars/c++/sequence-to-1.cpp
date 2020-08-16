// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/sequence-to-1.html .

using namespace std;

std::vector<int> seqToOne(int n) {
    vector<int> res;
    while (n != 1) {
        res.push_back(n);
        if (n > 1) {
            n--;
        } else {
            n++;
        }
    }
    res.push_back(1);
    return res;
}
