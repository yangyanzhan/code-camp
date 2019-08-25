class Solution {
public:
    int romanToInt(string s) {
        int bases[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int res = 0;
        for (int i = 0; i < 13; i++) {
            int base = bases[i];
            string roman = romans[i];
            while (s.size() >= roman.size()) {
                if (s.substr(0, roman.size()) == roman) {
                    res += base;
                    s = s.substr(roman.size());
                } else {
                    break;
                }
            }
        }
        return res;
    }
};
