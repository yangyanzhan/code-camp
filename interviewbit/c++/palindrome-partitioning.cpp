// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/palindrome-partitioning.html .

bool isPalin(string A) {
    int n = A.length(), m = n / 2;
    for (int i = 0; i < m; i++) {
        if (A[i] != A[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

vector<vector<string>> Solution::partition(string A) {
    vector<vector<string>> res;
    int n = A.length();
    for (int i = 1; i < n; i++) {
        string head = A.substr(0, i);
        if (isPalin(head)) {
            string tail = A.substr(i);
            vector<vector<string>> tailRes = partition(tail);
            for (vector<string> item : tailRes) {
                item.insert(item.begin(), head);
                res.push_back(item);
            }
        }
    }
    if (isPalin(A)) {
        res.push_back(vector<string>{A});
    }
    return res;
}
