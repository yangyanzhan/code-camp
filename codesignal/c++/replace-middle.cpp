// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/replace-middle.html .

std::vector<int> replaceMiddle(std::vector<int> arr) {
    int n = arr.size();
    if (n >= 2 && n % 2 == 0) {
        int num = arr[n / 2] + arr[n / 2 - 1];
        arr.erase(arr.begin() + n / 2, arr.begin() + n / 2 + 1);
        *(arr.begin() + n / 2 - 1) = num;
    }
    return arr;
}

