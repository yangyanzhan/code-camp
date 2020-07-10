// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/seats.html .

#define MOD 10000003

int Solution::seats(string str) {
    vector<int> indices;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'x') {
            indices.push_back(i);
        }
    }
    int n = indices.size();
    if (n <= 1) {
        return 0;
    }
    int median = (n % 2 != 0) ? indices[n / 2]
                              : ((indices[n / 2 - 1] + indices[n / 2]) / 2),
        res = 0;
    int count = 0;
    for (int i = median - 1; i >= 0; i--) {
        if (str[i] == '.') {
            count++;
        } else {
            res += count;
            res %= MOD;
        }
    }
    count = 0;
    for (int i = median + 1; i < str.length(); i++) {
        if (str[i] == '.') {
            count++;
        } else {
            res += count;
            res %= MOD;
        }
    }
    if (str[median] == '.') {
        res += n / 2;
        res %= MOD;
    }
    return res;
}
