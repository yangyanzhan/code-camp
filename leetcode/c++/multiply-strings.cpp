// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/multiply-strings.html .

class Solution {
public:
    string multiply(string num1, string num2) {
        string res = "0";
        for (int i = 0; i < num2.size(); i++) {
            int digit = num2[num2.size() - 1 - i] - '0';
            string prod = multiply(num1, digit, i);
            res = add(res, prod);
        }
        res = trim(res);
        return res;
    }

    string multiply(string num, int digit, int zeros) {
        string res;
        int carry = 0;
        for (int i = num.size() - 1; i >= 0; i--) {
            int prod = (num[i] - '0') * digit + carry;
            carry = prod / 10;
            res = to_string(prod % 10) + res;
        }
        if (carry > 0) {
            res = to_string(carry) + res;
        }
        for (int i = 0; i < zeros; i++) {
            res += "0";
        }
        return res;
    }

    string add(string num1, string num2) {
        string res;
        int m = num1.size(), n = num2.size(), carry = 0;
        for (int i = 0; i < max(m, n); i++) {
            int d1 = i < m ? (num1[m - 1 - i] - '0') : 0;
            int d2 = i < n ? (num2[n - 1 - i] - '0') : 0;
            int sum = d1 + d2 + carry;
            carry = sum / 10;
            res = to_string(sum % 10) + res;
        }
        if (carry > 0) {
            res = to_string(carry) + res;
        }
        return res;
    }

    string trim(string num) {
        string res;
        for (auto ch: num) {
            if (ch == '0') {
                if (res.size() > 0) {
                    res += ch;
                }
            } else {
                res += ch;
            }
        }
        if (res.empty()) {
            res = "0";
        }
        return res;
    }
};

