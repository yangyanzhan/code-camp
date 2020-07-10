// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/sort-out-the-men-from-boys.html .

#include <algorithm>
#include <vector>

using namespace std;

vector<int> menFromBoys(vector<int> values) {
    vector<int> nums1, nums2;
    for (auto value : values) {
        if (value % 2 == 0) {
            nums1.push_back(value);
        } else {
            nums2.push_back(value);
        }
    }
    sort(nums1.begin(), nums1.end());
    auto it1 = unique(nums1.begin(), nums1.end());
    nums1.resize(distance(nums1.begin(), it1));
    sort(nums2.begin(), nums2.end());
    reverse(nums2.begin(), nums2.end());
    auto it2 = unique(nums2.begin(), nums2.end());
    nums2.resize(distance(nums2.begin(), it2));
    vector<int> res;
    for (auto num : nums1) {
        res.push_back(num);
    }
    for (auto num : nums2) {
        res.push_back(num);
    }
    return res;
}
