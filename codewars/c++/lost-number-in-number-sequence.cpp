// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/lost-number-in-number-sequence.html .

using namespace std;

int findDeletedNumber(list<int> startingList, list<int> mixedList) {
    int n = startingList.size();
    if (n <= 0) {
        return 0;
    }
    vector<int> nums;
    while (!mixedList.empty()) {
        int num = mixedList.front();
        nums.push_back(num);
        mixedList.pop_front();
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }
    return nums.size() < n ? n : 0;
}
