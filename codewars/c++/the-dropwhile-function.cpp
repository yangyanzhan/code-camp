// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/the-dropwhile-function.html .

std::vector<int> dropWhile(std::vector<int> arr, std::function<bool (int)> pred) {
    using namespace std;
    for (int i = 0; i < arr.size(); i++) {
        if (!pred(arr[i])) {
            return vector<int>{arr.begin() + i, arr.end()};
        }
    }
    return {};
}

