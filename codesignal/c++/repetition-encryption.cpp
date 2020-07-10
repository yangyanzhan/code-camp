// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/repetition-encryption.html .

int repetitionEncryption(std::string letter) {
    std::transform(letter.begin(), letter.end(), letter.begin(),
                   [](char ch) { return tolower(ch); });
    std::regex pattern("(^|[^a-zA-Z])([a-zA-Z]+)[^a-zA-Z]+\\2([^a-zA-Z]|$)");

    return std::distance(
        std::sregex_iterator(letter.begin(), letter.end(), pattern),
        std::sregex_iterator());
}
