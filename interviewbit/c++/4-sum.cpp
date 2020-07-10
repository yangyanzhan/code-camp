// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/4-sum.html .

string toKey(int a, int b, int c, int d) {
    stringstream ss;
    ss << a << "~~";
    ss << b << "~~";
    ss << c << "~~";
    ss << d << "~~";
    return ss.str();
}

vector<vector<int>> Solution::fourSum(vector<int> &A, int B) {
    vector<vector<int>> res;
    set<string> keys;
    sort(A.begin(), A.end());
    int n = A.size();
    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            int a = A[i], b = A[j], begin = j + 1, end = n - 1;
            while (begin < end) {
                int c = A[begin], d = A[end];
                int sum = a + b + c + d;
                if (sum == B) {
                    string key = toKey(a, b, c, d);
                    if (keys.find(key) == keys.end()) {
                        keys.insert(key);
                        res.push_back(vector<int>{a, b, c, d});
                    }
                    begin++;
                    end--;
                } else if (sum < B) {
                    begin++;
                } else {
                    end--;
                }
            }
        }
    }
    return res;
}
