// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDnz-__gl3frqLexunpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/lintcode/nth-largest-element.html .

class Solution {
  public:
    /**
     * @param n: An integer
     * @param nums: An array
     * @return: the Kth largest element
     */
    int kthLargestElement(int n, vector<int> &nums) {
        using namespace std;
        int size = nums.size();
        int l = 0, r = size - 1;
        n = size - n;
        while (l < r) {
            int key = nums[l + r >> 1];
            int i = l - 1, j = r + 1;

            while (i < j) {
                do
                    i++;
                while (nums[i] < key);
                do
                    j--;
                while (nums[j] > key);
                if (i < j)
                    swap(nums[i], nums[j]);
            }

            if (j >= n)
                r = j;
            else
                l = j + 1;
        }
        return nums[n];
    }
};
