// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/kth-permutation-sequence.html .

void print(vector<int> nums, string tag) {
    cout << tag << ":";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

void nextPermutation(vector<int> &used, vector<int> &remains, vector<int> &res,
                     int &count) {
    if (remains.size() <= 10) {
        long long total = 1;
        for (long long i = 1; i <= remains.size(); i++) {
            total *= i;
        }
        if (total < count) {
            count -= total;
            return;
        }
    }
    if (remains.size() <= 0) {
        count--;
        if (count == 0) {
            for (int i = 0; i < used.size(); i++) {
                res.push_back(used[i]);
            }
            return;
        }
    } else {
        for (int i = 0; i < remains.size(); i++) {
            int remain = remains[i];
            used.push_back(remain);
            remains.erase(remains.begin() + i);
            nextPermutation(used, remains, res, count);
            if (res.size() > 0) {
                return;
            }
            remains.insert(remains.begin() + i, remain);
            used.pop_back();
        }
    }
}

string Solution::getPermutation(int n, int k) {
    vector<int> used, remains(n), res;
    for (int i = 1; i <= n; i++) {
        remains[i - 1] = i;
    }
    nextPermutation(used, remains, res, k);
    stringstream ss;
    for (int i = 0; i < n; i++) {
        ss << res[i];
    }
    return ss.str();
}
