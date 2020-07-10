// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/averages-of-numbers.html .

std::vector<double> averages(std::vector<int> numbers) {
    using namespace std;
    vector<double> res;
    for (int i = 1; i < numbers.size(); i++) {
        res.push_back(((double)numbers[i - 1] + numbers[i]) / 2);
    }
    return res;
}
