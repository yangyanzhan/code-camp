// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/implement-strstr.html .

class Solution {
    int base1 = 13;
    int base2 = 99999997;
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        int m = haystack.size();
        if (m < n) {
            return -1;
        }
        string curr = haystack.substr(0, n);
        int h1 = hash(needle);
        int h2 = hash(curr);
        if (h1 == h2) {
            return 0;
        }
        for (int i = n; i < m; i++) {
            int front = char_hash(haystack[i - n], n);
            h2 -= front;
            h2 = (base1 * h2 + haystack[i]) % base2;
            h2 = (h2 + base2) % base2;
            if (h1 == h2) {
                return i - n + 1;
            }
        }
        return -1;
    }

    int hash(string item) {
        long long sum = 0;
        for (int i = 0; i < item.size(); i++) {
            sum = (base1 * sum + item[i]) % base2;
        }
        return sum;
    }

    int char_hash(char ch, int repeats) {
        long long total = ch;
        for (int i = 1; i < repeats; i++) {
            total = (base1 * total) % base2;
        }
        return total;
    }
};

