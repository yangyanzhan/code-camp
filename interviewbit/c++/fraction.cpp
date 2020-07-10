// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/fraction.html .

string Solution::fractionToDecimal(int numerator, int denominator) {
    long long a = numerator, b = denominator;
    if (a == 0)
        return "0";
    if (b == 0)
        return "";
    bool nonNegative = a * b >= 0;
    if (a < 0) {
        a = -a;
    }
    if (b < 0) {
        b = -b;
    }
    long long intPart = a / b;
    stringstream ss;
    ss << intPart;
    if (a % b != 0) {
        ss << ".";
        map<long long, long long> mapping;
        vector<long long> nums;
        a = (a % b) * 10;
        while (mapping.find(a) == mapping.end()) {
            mapping[a] = nums.size();
            nums.push_back(a / b);
            a = (a % b) * 10;
            if (a == 0) {
                break;
            }
        }
        if (a == 0) {
            for (long long i = 0; i < nums.size(); i++) {
                ss << nums[i];
            }
        } else {
            long long n = nums.size(), k = mapping[a];
            for (long long i = 0; i < k; i++) {
                ss << nums[i];
            }
            ss << "(";
            for (long long i = k; i < n; i++) {
                ss << nums[i];
            }
            ss << ")";
        }
    }
    return (nonNegative ? "" : "-") + ss.str();
}
