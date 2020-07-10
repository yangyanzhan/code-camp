// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codeforces/next-round.html .

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int res = -1;
    for (int i = 0; i < min(n, k); i++) {
        int now = nums[i];
        if (now <= 0) {
            break;
        }
        res = i;
    }
    if (res == -1) {
        cout << 0 << endl;
        return 0;
    }
    if (res == min(n, k) - 1) {
        for (int i = res + 1; i < n; i++) {
            if (nums[i] != nums[res]) {
                break;
            }
            res = i;
        }
    }
    cout << (res + 1) << endl;
    return 0;
}
