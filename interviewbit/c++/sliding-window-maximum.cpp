// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/sliding-window-maximum.html .

vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    vector<int> res;
    vector<int> nums;
    int n = A.size();
    for (int i = 0; i < n; i++) {
        int a = A[i];
        if (nums.empty()) {
            nums.push_back(a);
        } else {
            int tail = nums.back();
            while (tail < a) {
                nums.pop_back();
                if (nums.empty()) {
                    break;
                }
                tail = nums.back();
            }
            nums.push_back(a);
            if (i + 1 > B) {
                if (A[i - B] == nums.front()) {
                    nums.erase(nums.begin());
                }
            }
        }
        if (i + 1 >= B) {
            res.push_back(nums.front());
        }
    }
    return res;
}
