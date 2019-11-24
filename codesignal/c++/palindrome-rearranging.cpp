// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/palindrome-rearranging.html .

bool palindromeRearranging(std::string inputString) {
    using namespace std;
    map<char, int> cache;
    for (auto ch: inputString) {
        if (cache.find(ch) == cache.end()) {
            cache[ch] = 0;
        }
        cache[ch]++;
    }
    int count = 0;
    for (auto pair: cache) {
        if (pair.second % 2 != 0) {
            count++;
        }
    }
    return count <= 1;
}
