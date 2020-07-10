// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/max-continuous-series-of-1s.html .

vector<int> Solution::maxone(vector<int> &A, int B) {
    int i = 0, j = 0, counts = 0, bestI = 0, bestLen = 0, n = A.size();
    while (j < n) {
        if (counts <= B) {
            if (A[j] == 0) {
                counts++;
            }
            j++;
        } else {
            if (A[i] == 0) {
                counts--;
            }
            i++;
        }
        int len = j - i;
        if (counts <= B) {
            if (len > bestLen) {
                bestLen = len;
                bestI = i;
            }
        }
    }
    vector<int> res;
    for (int i = 0; i < bestLen; i++) {
        res.push_back(bestI + i);
    }
    return res;
}

