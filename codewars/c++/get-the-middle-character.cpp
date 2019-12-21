// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/get-the-middle-character.html .

std::string get_middle(std::string input) {
    using namespace std;
    int n = input.size();
    if (n == 0) {
        return "";
    }
    if (n % 2 != 0) {
        return input.substr(n / 2, 1);
    } else {
        return input.substr(n / 2 - 1, 2);
    }
}
