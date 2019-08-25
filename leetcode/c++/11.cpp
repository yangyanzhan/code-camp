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
