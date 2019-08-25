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
