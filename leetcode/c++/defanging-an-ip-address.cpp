// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/defanging-an-ip-address.html .

class Solution {
public:
    string defangIPaddr(string address) {
        regex reg("(\\d)\\.(\\d)");
        while (regex_search(address, reg)) {
            address = regex_replace(address, reg, "$1[.]$2");
        }
        return address;
    }
};

