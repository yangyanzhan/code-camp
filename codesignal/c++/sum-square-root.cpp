// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/sum-square-root.html .

int SumSquareRoot(std::vector<int> lst) {
    vector<long> nums(lst.size());
    for (int i = 0; i < lst.size(); i++) {
        nums[i] = lst[i];
    }
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        long num = nums[i];
        if (find(nums.begin(), nums.end(), num * num) != nums.end()) {
            sum += num;
        }
    }
    return sum;
}
