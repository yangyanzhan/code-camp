// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/painters-partition-problem.html .

bool feasible(const vector<int> &nums, int painters, int top) {
    long long sum = 0, i = 0, n = nums.size();
    while (i < n) {
        if (painters <= 0) return false;
        if (sum + nums[i] > top) {
            sum = 0;
            painters--;
        } else {
            sum += nums[i];
            i++;
        }
    }
    return true;
}

int Solution::paint(int A, int B, vector<int> &C) {
    long long sum = 0, n = C.size();
    for (int len: C) {
        sum += len;
    }
    long long begin = sum / A, end = sum, best = -1;
    while (begin <= end) {
        long long middle = (begin + end) / 2;
        if (feasible(C, A, middle)) {
            best = middle;
            end = middle - 1;
        } else {
            begin = middle + 1;
        }
    }
    return ((best % 10000003) * (B % 10000003)) % 10000003;
}

