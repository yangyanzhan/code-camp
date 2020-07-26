// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/splitting-numbers.html .

#include <bitset>
#include <string>
#include <utility>

using namespace std;

std::pair<int, int> splitNumbers(int n) {
    auto item = bitset<32>(n).to_string();
    auto item1 = item, item2 = item;
    int c = 0;
    for (int i = item.size() - 1; i >= 0; i--) {
        if (item[i] == '1') {
            c++;
            if (c % 2 == 1) {
                item2[i] = '0';
            } else {
                item1[i] = '0';
            }
        }
    }
    return {stoi(item1, nullptr, 2), stoi(item2, nullptr, 2)};
}
