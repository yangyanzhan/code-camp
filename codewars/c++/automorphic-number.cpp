// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/automorphic-number.html .

#include <string>

using namespace std;

string autoMorphic (int number) {
    auto item1 = to_string(number);
    auto item2 = to_string(number * number);
    item2 = item2.substr(item2.size() - item1.size());
    return item1 == item2 ? "Automorphic" : "Not!!";
}

