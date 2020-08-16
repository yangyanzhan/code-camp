// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/binary-representation-of-an-integer.html .

using namespace std;

#include <bitset>
#include <vector>

vector<int> showBits(int n) {
    string item = std::bitset<32>(n).to_string();
    vector<int> res;
    for (int i = 0; i < 32; i++) {
        res.push_back(item[i] - '0');
    }
    return res;
}
