// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/adding-values-of-arrays-in-a-shifted-way.html .

using namespace std;

std::vector<int> addingShifted(std::vector<std::vector<int>> arrayOfArrays,
                               int shift) {
    vector<int> res = arrayOfArrays[0];
    int offset = shift;
    for (int k = 1; k < arrayOfArrays.size(); k++) {
        vector<int> nums = arrayOfArrays[k];
        for (int i = 0; i < nums.size(); i++) {
            int idx = i + offset;
            if (idx < res.size()) {
                res[idx] += nums[i];
            } else {
                res.push_back(nums[i]);
            }
        }
        offset += shift;
    }
    return res;
}
