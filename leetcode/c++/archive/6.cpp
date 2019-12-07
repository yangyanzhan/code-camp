// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }
        
        int n = s.size();
        string res(n, '0');
        int resIdx = 0;
        for (int rowIdx = 0; rowIdx < numRows; rowIdx++) {
            int step1 = numRows - 1 - rowIdx;
            int step2 = rowIdx;
            if (step1 == 0) {
                step1 = step2;
            }
            if (step2 == 0) {
                step2 = step1;
            }
            int idx = rowIdx;
            int count = 0;
            while (idx < n) {
                res[resIdx++] = s[idx];
                count++;
                if (count % 2 == 1) {
                    idx += 2 * step1;
                } else {
                    idx += 2 * step2;
                }
            }
        }
        return res;
    }
};
