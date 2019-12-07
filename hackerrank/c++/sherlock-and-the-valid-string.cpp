// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/sherlock-and-the-valid-string.html .

string isValid(string s) {
    map<char, int> mapping;
    for (auto ch : s) {
        if (mapping.find(ch) == mapping.end()) {
            mapping[ch] = 0;
        }
        mapping[ch]++;
    }
    int num1, num2, cnt1 = 0, cnt2 = 0;
    for (auto pair : mapping) {
        int num = pair.second;
        if (cnt1 == 0) {
            num1 = num;
            cnt1++;
        } else {
            if (num1 == num) {
                cnt1++;
            } else if (cnt2 == 0) {
                num2 = num;
                cnt2++;
            } else {
                if (num2 == num) {
                    if (cnt1 == 1) {
                        swap(num1, num2);
                        swap(cnt1, cnt2);
                        cnt1++;
                    } else {
                        return "NO";
                    }
                } else {
                    return "NO";
                }
            }
        }
    }
    return (cnt2 == 0 || num2 == 1 || (cnt1 == 1 && abs(num1 - num2) == 1) || num2 - num1 == 1) ? "YES" : "NO";
}
