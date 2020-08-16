// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/adding-words-part-i.html .

using namespace std;

#include <iostream>
#include <string>

vector<string> items = {
    "zero",     "one",      "two",      "three",   "four",    "five",
    "six",      "seven",    "eight",    "nine",    "ten",     "eleven",
    "twelve",   "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
    "eighteen", "nineteen", "twenty"};

class Arith {
    int num;

  public:
    Arith(string item) { num = to_int(item); }
    int to_int(string item) {
        int num;
        for (int i = 0; i < items.size(); i++) {
            if (items[i] == item) {
                num = i;
                break;
            }
        }
        return num;
    }
    string to_string(int num) { return items[num]; }
    string add(string item) {
        int res = num + to_int(item);
        return to_string(res);
    }
};
