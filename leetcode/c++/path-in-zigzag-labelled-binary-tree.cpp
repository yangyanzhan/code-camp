// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/path-in-zigzag-labelled-binary-tree.html .

class Solution {
    int count(int level) {
        int res = 1;
        for (int i = 1; i < level; i++) {
            res *= 2;
        }
        return res;
    }
    int level(int num) {
        int res = 0;
        while (num > 0) {
            res++;
            num /= 2;
        }
        return res;
    }
    int common(int num) {
        int l = level(num);
        if (l % 2 != 0) {
            return num;
        }
        int cnt = count(l);
        return cnt - 1 + (cnt - (num - (cnt - 1))) + 1;
    }
    int novel(int num) {
        int l = level(num);
        if (l % 2 != 0) {
            return num;
        }
        int cnt = count(l);
        return cnt - 1 + (cnt - (num - (cnt - 1))) + 1;
    }
public:
    vector<int> pathInZigZagTree(int label) {
        if (label == 1) {
            return {1};
        }
        int l = level(label);
        vector<int> res;
        if (l % 2 != 0) {
            int pre = label / 2;
            pre = novel(pre);
            res = pathInZigZagTree(pre);
        } else {
            int pre = common(label) / 2;
            res = pathInZigZagTree(pre);
        }
        res.push_back(label);
        return res;
    }
};

