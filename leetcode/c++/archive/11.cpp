// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int res = 0;
        int h1 = height[start];
        int h2 = height[end];
        while (start < end) {
            int area = (end - start) * (h1 <= h2 ? h1 : h2);
            if (h1 > h2) {
                end--;
                h2 = height[end];
            } else {
                start++;
                h1 = height[start];
            }
            if (area > res) {
                res = area;
            }
        }
        return res;
    }
};
