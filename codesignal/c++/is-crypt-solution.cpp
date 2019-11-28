// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/is-crypt-solution.html .

bool isCryptSolution(std::vector<std::string> crypt, std::vector<std::vector<char>> solution) {
    using namespace std;
    map<char, char> cache;
    for (auto pair: solution) {
        cache[pair[0]] = pair[1];
        if (!('0' <= pair[1] && pair[1] <= '9')) {
            return false;
        }
    }
    for (auto &word: crypt) {
        for (auto &ch: word) {
            if (cache.find(ch) == cache.end()) {
                return false;
            }
            ch = cache[ch];
        }
        if (word.size() > 1 && word[0] == '0') {
            return false;
        }
    }
    auto a = stoll(crypt[0]);
    auto b = stoll(crypt[1]);
    auto c = stoll(crypt[2]);
    return c == a + b;
}

