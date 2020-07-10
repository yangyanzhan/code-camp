// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/largest-continuous-sequence-zero-sum.html .

vector<int> Solution::lszero(vector<int> &A) {
    map<int, int> mapping;
    int sum = 0, bestI, bestLen = 0;
    for (int i = 0; i < A.size(); i++) {
        int num = A[i];
        sum += num;
        if (sum == 0) {
            int preI = 0, len = i + 1;
            if (len > bestLen) {
                bestLen = len;
                bestI = preI;
            }
            continue;
        }
        if (mapping.find(sum) != mapping.end()) {
            int preI = mapping[sum] + 1, len = i - preI + 1;
            if (len > bestLen) {
                bestLen = len;
                bestI = preI;
            }
        } else {
            mapping[sum] = i;
        }
    }
    vector<int> res;
    for (int k = 0; k < bestLen; k++) {
        res.push_back(A[bestI + k]);
    }
    return res;
}
