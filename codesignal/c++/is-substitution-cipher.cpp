// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/is-substitution-cipher.html .

bool valid(std::string string1, std::string string2) {
    map<char, char> mapping;
    for (int i = 0; i < string1.length(); i++) {
        char ch1 = string1[i], ch2 = string2[i];
        if (mapping.find(ch1) != mapping.end()) {
            if (mapping[ch1] != ch2) {
                return false;
            }
        }
        mapping[ch1] = ch2;
    }
    return true;
}

bool isSubstitutionCipher(std::string string1, std::string string2) {
    return valid(string1, string2) && valid(string2, string1);
}

