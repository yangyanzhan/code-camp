class Solution {
public:
    string intToRoman(int num) {
        int bases[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string romans[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string res = "";
        for (int i = 0; i < 13; i++) {
            int base = bases[i];
            string roman = romans[i];
            int count = num / base;
            num -= count * base;
            for (int j = 0; j < count; j++) {
                res += roman;
            }
        }
        return res;
    }
};
