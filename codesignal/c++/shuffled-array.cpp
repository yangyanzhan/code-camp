// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/shuffled-array.html .

std::vector<int> shuffledArray(std::vector<int> shuffled) {
    using namespace std;
    long long sum = 0;
    for (int i = 0; i < shuffled.size(); i++) {
        sum += shuffled[i];
    }
    sum /= 2;
    for (int i = 0; i < shuffled.size(); i++) {
        if (shuffled[i] == sum) {
            shuffled.erase(shuffled.begin() + i);
            break;
        }
    }
    sort(shuffled.begin(), shuffled.end());
    return shuffled;
}
