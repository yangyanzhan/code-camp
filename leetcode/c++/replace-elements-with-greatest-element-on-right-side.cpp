// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/replace-elements-with-greatest-element-on-right-side.html .

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if (arr.size() == 0) {
            return arr;
        }
        if (arr.size() == 1) {
            arr[0] = -1;
            return arr;
        }
        int peak = arr[arr.size() - 1];
        arr[arr.size() - 1] = -1;
        for (int i = arr.size() - 2; i >= 0; i--) {
            int tmp = max(peak, arr[i]);
            arr[i] = peak;
            peak = tmp;
        }
        return arr;
    }
};

