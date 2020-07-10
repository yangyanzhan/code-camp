// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/3-sum-zero.html .

string getKey(int i, int j, int k, vector<int> &A) {
    stringstream ss;
    ss << A[i] << " " << A[j] << " " << A[k];
    return ss.str();
}

vector<vector<int>> Solution::threeSum(vector<int> &A) {
    set<string> seen;
    sort(A.begin(), A.end());
    int n = A.size();
    vector<vector<int>> res;
    for (int i = 0; i < n - 2; i++) {
        int begin = i + 1, end = n - 1;
        while (begin < end) {
            long long sum = A[i];
            sum += A[begin];
            sum += A[end];
            if (sum == 0) {
                string key = getKey(i, begin, end, A);
                if (seen.find(key) == seen.end()) {
                    seen.insert(key);
                    res.push_back(vector<int>{A[i], A[begin], A[end]});
                }
                begin++;
                end--;
            } else if (sum < 0) {
                begin++;
            } else {
                end--;
            }
        }
    }
    return res;
}

