// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/valid-ip-addresses.html .

string getIp(vector<string> nums) {
    string res;
    for (string num : nums) {
        if (num[0] == '0' && num.length() > 1) {
            return "";
        }
        if (num == "") {
            return "";
        }
        int n = stoi(num);
        if (n > 255) {
            return "";
        }
        res += num + ".";
    }
    return res.substr(0, res.length() - 1);
}

void check(vector<string> &seen, string A, vector<string> &ips) {
    if (seen.size() == 3) {
        seen.push_back(A);
        string ip = getIp(seen);
        if (ip != "") {
            ips.push_back(ip);
        }
        seen.pop_back();
    } else {
        int top = A.length();
        if (top > 3)
            top = 3;
        for (int i = 1; i <= top; i++) {
            seen.push_back(A.substr(0, i));
            check(seen, A.substr(i), ips);
            seen.pop_back();
        }
    }
}

vector<string> Solution::restoreIpAddresses(string A) {
    vector<string> res;
    vector<string> seen;
    check(seen, A, res);
    sort(res.begin(), res.end());
    return res;
}
