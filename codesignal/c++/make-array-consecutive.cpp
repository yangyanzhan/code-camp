// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/make-array-consecutive.html .

std::vector<int> makeArrayConsecutive(std::vector<int> sequence) {
    using namespace std;
    sort(sequence.begin(), sequence.end());
    int a = sequence.front();
    int b = sequence.back();
    vector<int> res;
    int idx = 0;
    for (int num = a; num <= b; num++) {
        if (sequence[idx] == num) {
            idx++;
        } else {
            res.push_back(num);
        }
    }
    return res;
}

